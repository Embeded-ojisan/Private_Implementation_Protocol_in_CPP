/** Conditions Of Use * * This software was developed by employees of the National Institute of* Standards and Technology (NIST), an agency of the Federal Government.* Pursuant to title 15 Untied States Code Section 105, works of NIST* employees are not subject to copyright protection in the United States* and are considered to be in the public domain.  As a result, a formal* license is not needed to use the software.* * This software is provided by NIST as a service and is expressly* provided "AS IS."  NIST MAKES NO WARRANTY OF ANY KIND, EXPRESS, IMPLIED* OR STATUTORY, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTY OF* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, NON-INFRINGEMENT* AND DATA ACCURACY.  NIST does not warrant or make any representations* regarding the use of the software or the results thereof, including but* not limited to the correctness, accuracy, reliability or usefulness of* the software.* * Permission to use this software is contingent upon your acceptance* of the terms of this agreement*  * .* *//******************************************************************************* * Product of NIST/ITL Advanced Networking Technologies Division (ANTD)         * *******************************************************************************/package org.siprop.pip.message;import java.io.UnsupportedEncodingException;import java.text.ParseException;import java.util.Iterator;import java.util.LinkedList;import org.siprop.pip.message.address.PipUri;import org.siprop.pip.message.header.CSeqHeader;import org.siprop.pip.message.header.CallIdHeader;import org.siprop.pip.message.header.FromHeader;import org.siprop.pip.message.header.PIPHeader;import org.siprop.pip.message.header.StatusLine;import org.siprop.pip.message.header.ToHeader;import org.siprop.pip.message.util.InternalErrorHandler;import org.siprop.pip.message.util.PIPDuplicateHeaderException;/** * PIP Response structure. * * @version 1.2 $Revision: 1.12 $ $Date: 2006/10/26 22:47:59 $ * @since 1.1 * * @author M. Ranganathan   <br/> * *  */public final class PIPResponse	extends PIPMessage {	protected StatusLine statusLine;    public static final int RINGING = 180;    public static final int OK = 200;    public static final int BAD_REQUEST = 400;       public static final int FORBIDDEN = 403;    public static final int METHOD_NOT_ALLOWED = 405;       public static final int REQUEST_TIMEOUT = 408;        public static final int UNSUPPORTED_MEDIA_TYPE = 415;        public static final int UNSUPPORTED_URI_SCHEME = 416;     public static final int CALL_OR_TRANSACTION_DOES_NOT_EXIST = 481;    public static final int BUSY_HERE = 486;    public static final int REQUEST_TERMINATED = 487;    public static final int NOT_ACCEPTABLE_HERE = 488;        		public static String getReasonPhrase(int rc) {		String retval = null;		switch (rc) {			case RINGING :				retval = "Ringing";				break;			case OK :				retval = "OK";				break;			case BAD_REQUEST :				retval = "Bad request";				break;			case FORBIDDEN :				retval = "Forbidden";				break;			case METHOD_NOT_ALLOWED :				retval = "Method not allowed";				break;			case REQUEST_TIMEOUT :				retval = "Request timeout";				break;			case UNSUPPORTED_MEDIA_TYPE :				retval = "Unsupported media type";				break;			case UNSUPPORTED_URI_SCHEME :				retval = "Unsupported URIold Scheme";				break;			case CALL_OR_TRANSACTION_DOES_NOT_EXIST :				retval = "Call/Transaction does not exist";				break;			case BUSY_HERE :				retval = "Busy here";				break;			case REQUEST_TERMINATED :				retval = "Request Terminated";				break;			case NOT_ACCEPTABLE_HERE :				retval = "Not Accpetable here";				break;			default :				retval = "Unkown Reason";		}		return retval;	}	/** set the status code.	 *@param statusCode is the status code to set.	 *@throws IlegalArgumentException if invalid status code.	 */	public void setStatusCode(int statusCode) throws ParseException {		if (statusCode < 100 || statusCode > 800)			throw new ParseException("bad status code", 0);		if (this.statusLine == null)			this.statusLine = new StatusLine();		this.statusLine.setStatusCode(statusCode);	}	/**	 * Get the status line of the response.	 *@return StatusLine	 */	public StatusLine getStatusLine() {		return statusLine;	}	/** Get the staus code (conveniance function).	 *@return the status code of the status line.	 */	public int getStatusCode() {		return statusLine.getStatusCode();	}	/** Set the reason phrase.	 *@param reasonPhrase the reason phrase.	 *@throws IllegalArgumentException if null string	 */	public void setReasonPhrase(String reasonPhrase) {		if (reasonPhrase == null)			throw new IllegalArgumentException("Bad reason phrase");		if (this.statusLine == null)			this.statusLine = new StatusLine();		this.statusLine.setReasonPhrase(reasonPhrase);	}	/** Get the reason phrase.	 *@return the reason phrase.	 */	public String getReasonPhrase() {		if (statusLine == null || statusLine.getReasonPhrase() == null)			return "";		else			return statusLine.getReasonPhrase();	}	/** Return true if the response is a final response.	 *@param rc is the return code.	 *@return true if the parameter is between the range 200 and 700.	 */	public static boolean isFinalResponse(int rc) {		return rc >= 200 && rc < 700;	}	/** Is this a final response?	 *@return true if this is a final response.	 */	public boolean isFinalResponse() {		return isFinalResponse(statusLine.getStatusCode());	}	/**	 * Set the status line field.	 *@param sl Status line to set.	 */	public void setStatusLine(StatusLine sl) {		statusLine = sl;	}	/** Constructor.	 */	public PIPResponse() {		super();	}	/**	 * Check the response structure. Must have from, to CSEQ and VIA	 * headers.	 */	public void checkHeaders() throws ParseException {		if (getCSeq() == null) {			throw new ParseException(CSeqHeader.NAME+ " Is missing ", 0);		}		if (getTo() == null) {			throw new ParseException(ToHeader.NAME+ " Is missing ", 0);		}		if (getFrom() == null) {			throw new ParseException(FromHeader.NAME+ " Is missing ", 0);		}		if (getCallId() == null) {			throw new ParseException(CallIdHeader.NAME + " Is missing ", 0);		}		// JvB: no need to check this, should not fail if this is the case		//		// ContactHeader contact = this.getContactHeader();		// if (contact != null && contact.isWildCard()) {		//	throw new ParseException("Bad contact header -- should not be wild card!",0);		// }		if (getStatusCode() > 499)			throw new ParseException("Unknown error code!" + getStatusCode(), 0);				/*		 * Check Offer/Answer.		 */		try {			if (PIPRequest.INVITE.equals(this.getCSeq().getMethod()) 				&& this.getStatusCode() == 200				&& this.getMessageContent() == null) {				throw new ParseException(						"Offer/Answer null ", 0);			}		} catch (UnsupportedEncodingException e) {			throw new ParseException(					"Offer/Answer null ", 0);		}			}	/**	 *  Encode the PIP Request as a string.	 *@return The string encoded canonical form of the message.	 */	public String encode() {		String retval;		if (statusLine != null)			retval = statusLine.encode() + super.encode();		else			retval = super.encode();		return retval ;	}	/** Encode the message except for the body.	*	*@return The string except for the body.	*/	public String encodeMessage() {		String retval;		if (statusLine != null)			retval = statusLine.encode() + super.encodePIPHeaders();		else			retval = super.encodePIPHeaders();		return retval ;	}			/** Get this message as a list of encoded strings.	 *@return LinkedList containing encoded strings for each header in	 *   the message.	 */	public LinkedList getMessageAsEncodedStrings() {		LinkedList retval = super.getMessageAsEncodedStrings();		if (statusLine != null)			retval.addFirst(statusLine.encode());		return retval;	}	/**	 * Make a clone (deep copy) of this object.	 *@return a deep copy of this object.	 */	public Object clone() {		PIPResponse retval = (PIPResponse) super.clone();		if (this.statusLine != null)			retval.statusLine = (StatusLine) this.statusLine.clone();		return retval;	}		/**	 * Compare for equality.	 *@param other other object to compare with.	 */	public boolean equals(Object other) {		if (!this.getClass().equals(other.getClass()))			return false;		PIPResponse that = (PIPResponse) other;		return statusLine.equals(that.statusLine) && super.equals(other);	}	/**	 * Match with a template.	 *@param matchObj template object to match ourselves with (null	 * in any position in the template object matches wildcard)	 */	public boolean match(Object matchObj) {		if (matchObj == null)			return true;		else if (!matchObj.getClass().equals(this.getClass())) {			return false;		} else if (matchObj == this)			return true;		PIPResponse that = (PIPResponse) matchObj;				StatusLine rline = that.statusLine;		if (this.statusLine == null && rline != null)			return false;		else if (this.statusLine == rline)			return super.match(matchObj);		else {						return statusLine.match(that.statusLine) && super.match(matchObj);		}	}	/** Encode this into a byte array.	 * This is used when the body has been set as a binary array	 * and you want to encode the body as a byte array for transmission.	 *	 *@return a byte array containing the PIPRequest encoded as a byte	 *  array.	 */	public byte[] encodeAsBytes() {		byte[] slbytes = null;		if (statusLine != null) {			try {				slbytes = statusLine.encode().getBytes("UTF-8");			} catch (UnsupportedEncodingException ex) {				InternalErrorHandler.handleException(ex);			}		}		byte[] superbytes = super.encodeAsBytes();		byte[] retval = new byte[slbytes.length + superbytes.length];		int i = 0;		if (slbytes != null) {			for (i = 0; i < slbytes.length; i++) {				retval[i] = slbytes[i];			}		}		for (int j = 0; j < superbytes.length; j++, i++) {			retval[i] = superbytes[j];		}		return retval;	}		/** Get a dialog identifier.	 * Generates a string that can be used as a dialog identifier.	 *	 * @param isServer is set to true if this is the UAS	 * and set to false if this is the UAC	 */	public String getDialogId(boolean isServer) {		CallIdHeader cid = (CallIdHeader) this.getCallId();		FromHeader from = (FromHeader) this.getFrom();		ToHeader to = (ToHeader) this.getTo();		StringBuffer retval = new StringBuffer(cid.getCallId());		if (!isServer) {			//retval.append(COLON).append(to.getUserAtHostPort());			if (to.getTag() != null) {				retval.append(COLON);				retval.append(to.getTag());			}		} else {			//retval.append(COLON).append(to.getUserAtHostPort());			if (to.getTag() != null) {				retval.append(COLON);				retval.append(to.getTag());			}		}		return retval.toString().toLowerCase();	}	public String getDialogId(boolean isServer, String toTag) {		CallIdHeader cid = (CallIdHeader) this.getCallId();		FromHeader from = (FromHeader) this.getFrom();		ToHeader to = (ToHeader) this.getTo();		StringBuffer retval = new StringBuffer(cid.getCallId());		if (!isServer) {			if (toTag != null) {				retval.append(COLON);				retval.append(toTag);			}		} else {			//retval.append(COLON).append(to.getUserAtHostPort());			if (toTag != null) {				retval.append(COLON);				retval.append(toTag);			}		}		return retval.toString().toLowerCase();	}	/**	 * Create a new PIPRequest from the given response. Note that the	 * RecordRoute Via and CSeqHeader headers are not copied from the response.	 * These have to be added by the caller.	 * This method is useful for generating ACK messages from final	 * responses.	 *	 *@param requestURI is the request URIold to use.	 *@param via is the via header to use.	 *@param cseq is the cseq header to use in the generated	 * request.	 */	public PIPRequest createRequest(PipUri requestURI, CSeqHeader cseq) {		PIPRequest newRequest = new PIPRequest();		String method = cseq.getMethod();				newRequest.setMethod(method);		newRequest.setRequestURI(requestURI);				newRequest.setHeader(cseq);		Iterator headerIterator = getHeaders();		while (headerIterator.hasNext()) {			PIPHeader nextHeader = (PIPHeader) headerIterator.next();			if (nextHeader instanceof ToHeader)				nextHeader = (PIPHeader) nextHeader.clone();			else if (nextHeader instanceof FromHeader)				nextHeader = (PIPHeader) nextHeader.clone();			try {				newRequest.attachHeader(nextHeader, false);			} catch (PIPDuplicateHeaderException e) {				e.printStackTrace();			}		}				return newRequest;	}	/**	 * Get the encoded first line.	 *	 *@return the status line encoded.	 *	 */	public String getFirstLine() {		if (this.statusLine == null)			return null;		else			return this.statusLine.encode();	}	public void setPIPVersion(String pipVersion) {		this.statusLine.setPipVersion(pipVersion);	}	public String getPIPVersion() {		return this.statusLine.getPipVersion();	}	public String toString() {		if (statusLine == null) return  "";		else return statusLine.encode() + super.encode();	}    /**     * Generate a request from a response.     *      * @param requestURI -- the request URIold to assign to the request.     * @param via -- the Via header to assign to the request     * @param cseq -- the CSeqHeader header to assign to the request     * @param from -- the FromHeader header to assign to the request     * @param to -- the ToHeader header to assign to the request     * @return -- the newly generated pip request.     */    public PIPRequest createRequest(PipUri requestURI, CSeqHeader cseq, FromHeader from, ToHeader to) {    	PIPRequest newRequest = new PIPRequest();		String method = cseq.getMethod();				newRequest.setMethod(method);		newRequest.setRequestURI(requestURI);		newRequest.setHeader(cseq);		Iterator headerIterator = getHeaders();		while (headerIterator.hasNext()) {			PIPHeader nextHeader = (PIPHeader) headerIterator.next();			if (nextHeader instanceof ToHeader)				nextHeader = (PIPHeader) to;			else if (nextHeader instanceof FromHeader)				nextHeader = (PIPHeader) from;			try {				newRequest.attachHeader(nextHeader, false);			} catch (PIPDuplicateHeaderException e) {			    //Should not happen!				e.printStackTrace();			}		}				return newRequest;            }}