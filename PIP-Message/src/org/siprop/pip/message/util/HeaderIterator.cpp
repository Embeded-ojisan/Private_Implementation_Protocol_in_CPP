/** Conditions Of Use * * This software was developed by employees of the National Institute of* Standards and Technology (NIST), an agency of the Federal Government.* Pursuant to title 15 Untied States Code Section 105, works of NIST* employees are not subject to copyright protection in the United States* and are considered to be in the public domain.  As a result, a formal* license is not needed to use the software.* * This software is provided by NIST as a service and is expressly* provided "AS IS."  NIST MAKES NO WARRANTY OF ANY KIND, EXPRESS, IMPLIED* OR STATUTORY, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTY OF* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, NON-INFRINGEMENT* AND DATA ACCURACY.  NIST does not warrant or make any representations* regarding the use of the software or the results thereof, including but* not limited to the correctness, accuracy, reliability or usefulness of* the software.* * Permission to use this software is contingent upon your acceptance* of the terms of this agreement*  * .* */package org.siprop.pip.message.util;import java.util.ListIterator;import java.util.NoSuchElementException;import org.siprop.pip.message.PIPMessage;import org.siprop.pip.message.header.PIPHeader;/** * Iterator over lists of headers. Allows for uniform removal handling for singleton headers. * @author M. Ranganathan * @version 1.2 $Revision: 1.7 $ $Date: 2006/07/13 09:02:48 $ * @since 1.1 */public class HeaderIterator implements ListIterator {	private boolean toRemove;	private int index;	private PIPMessage pipMessage;	private PIPHeader pipHeader;	public HeaderIterator(PIPMessage pipMessage, PIPHeader pipHeader) {		this.pipMessage = pipMessage;		this.pipHeader = pipHeader;	}	public Object next() throws NoSuchElementException {		if (pipHeader == null || index == 1)			throw new NoSuchElementException();		toRemove = true;		index = 1;		return (Object) pipHeader;	}	public Object previous() throws NoSuchElementException {		if (pipHeader == null || index == 0)			throw new NoSuchElementException();		toRemove = true;		index = 0;		return (Object) pipHeader;	}	public int nextIndex() {		return 1;	}	public int previousIndex() {		return index == 0 ? -1 : 0;	}	public void set(Object header) {		throw new UnsupportedOperationException();	}	public void add(Object header) {		throw new UnsupportedOperationException();	}	public void remove() throws IllegalStateException {		if (this.pipHeader == null)			throw new IllegalStateException();		if (toRemove) {			this.pipHeader = null;			this.pipMessage.removeHeader(pipHeader.getName());		} else {			throw new IllegalStateException();		}	}	public boolean hasNext() {		return index == 0;	}	public boolean hasPrevious() {		return index == 1;	}}