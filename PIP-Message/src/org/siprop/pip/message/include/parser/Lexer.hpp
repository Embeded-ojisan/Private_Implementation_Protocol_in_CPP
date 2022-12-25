/* * Conditions Of Use  *  * This software was developed by employees of the National Institute of * Standards and Technology (NIST), an agency of the Federal Government. * Pursuant to title 15 Untied States Code Section 105, works of NIST * employees are not subject to copyright protection in the United States * and are considered to be in the public domain.  As a result, a formal * license is not needed to use the software. *  * This software is provided by NIST as a service and is expressly * provided "AS IS."  NIST MAKES NO WARRANTY OF ANY KIND, EXPRESS, IMPLIED * OR STATUTORY, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTY OF * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, NON-INFRINGEMENT * AND DATA ACCURACY.  NIST does not warrant or make any representations * regarding the use of the software or the results thereof, including but * not limited to the correctness, accuracy, reliability or usefulness of * the software. *  * Permission to use this software is contingent upon your acceptance * of the terms of this agreement *   * . *  */package org.siprop.pip.message.parser;import java.util.Hashtable;import org.siprop.pip.message.header.AllowHeader;import org.siprop.pip.message.header.CSeqHeader;import org.siprop.pip.message.header.CallIdHeader;import org.siprop.pip.message.header.ContactHeader;import org.siprop.pip.message.header.ContentLengthHeader;import org.siprop.pip.message.header.ContentTypeHeader;import org.siprop.pip.message.header.FromHeader;import org.siprop.pip.message.header.ToHeader;import org.siprop.pip.message.util.LexerCore;/** * Lexer class for the parser. *  * @version 1.2 *  * @author M. Ranganathan <br/> *  *  */public class Lexer extends LexerCore {	/**	 * get the header name of the line	 * 	 * @return the header name (stuff before the :) bug fix submitted by	 *         zvali@dev.java.net	 */	public static String getHeaderName(String line) {		if (line == null)			return null;		String headerName = null;		try {			int begin = line.indexOf(":");			headerName = null;			if (begin >= 1)				headerName = line.substring(0, begin).trim();		} catch (IndexOutOfBoundsException e) {			return null;		}		return headerName;	}	public Lexer(String lexerName, String buffer) {		super(lexerName, buffer);		this.selectLexer(lexerName);	}	/**	 * get the header value of the line	 * 	 * @return String	 */	public static String getHeaderValue(String line) {		if (line == null)			return null;		String headerValue = null;		try {			int begin = line.indexOf(":");			headerValue = line.substring(begin + 1);		} catch (IndexOutOfBoundsException e) {			return null;		}		return headerValue;	}	public void selectLexer(String lexerName) {		synchronized (lexerTables) {			// Synchronization Bug fix by Robert Rosen.			currentLexer = (Hashtable) lexerTables.get(lexerName);			this.currentLexerName = lexerName;			if (currentLexer == null) {				addLexer(lexerName);				if (lexerName.equals("method_keywordLexer")) {					addKeyword(TokenNames.ACK, TokenTypes.ACK);					addKeyword(TokenNames.BYE, TokenTypes.BYE);					addKeyword(TokenNames.INVITE, TokenTypes.INVITE);					addKeyword(TokenNames.PIP.toUpperCase(), TokenTypes.PIP);				} else if (lexerName.equals("command_keywordLexer")) {					addKeyword(FromHeader.NAME.toUpperCase(), TokenTypes.FROM);					addKeyword(ToHeader.NAME.toUpperCase(), TokenTypes.TO);					addKeyword(AllowHeader.NAME.toUpperCase(), TokenTypes.ALLOW);					addKeyword(ContentLengthHeader.NAME.toUpperCase(),							TokenTypes.CONTENT_LENGTH);					addKeyword(ContentTypeHeader.NAME.toUpperCase(),							TokenTypes.CONTENT_TYPE);					addKeyword(ContactHeader.NAME.toUpperCase(),							TokenTypes.CONTACT);					addKeyword(CallIdHeader.NAME.toUpperCase(),							TokenTypes.CALL_ID);					addKeyword(CSeqHeader.NAME.toUpperCase(), TokenTypes.CSEQ);					// end //				} else if (lexerName.equals("status_lineLexer")) {					addKeyword(TokenNames.PIP.toUpperCase(), TokenTypes.PIP);				} else if (lexerName.equals("request_lineLexer")) {					addKeyword(TokenNames.PIP.toUpperCase(), TokenTypes.PIP);				} else if (lexerName.equals("pip_urlLexer")) {					addKeyword(TokenNames.PIP.toUpperCase(), TokenTypes.PIP);				}			}		}	}}