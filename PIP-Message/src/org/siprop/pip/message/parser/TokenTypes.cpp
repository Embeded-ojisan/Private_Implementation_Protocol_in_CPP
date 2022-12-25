/** Conditions Of Use * * This software was developed by employees of the National Institute of* Standards and Technology (NIST), an agency of the Federal Government.* Pursuant to title 15 Untied States Code Section 105, works of NIST* employees are not subject to copyright protection in the United States* and are considered to be in the public domain.  As a result, a formal* license is not needed to use the software.* * This software is provided by NIST as a service and is expressly* provided "AS IS."  NIST MAKES NO WARRANTY OF ANY KIND, EXPRESS, IMPLIED* OR STATUTORY, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTY OF* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, NON-INFRINGEMENT* AND DATA ACCURACY.  NIST does not warrant or make any representations* regarding the use of the software or the results thereof, including but* not limited to the correctness, accuracy, reliability or usefulness of* the software.* * Permission to use this software is contingent upon your acceptance* of the terms of this agreement*  * .* */package org.siprop.pip.message.parser;import org.siprop.pip.message.util.LexerCore;/** * @version 1.2 $Revision: 1.9 $ $Date: 2007/01/08 19:24:22 $ */public interface TokenTypes {	public static final int START = LexerCore.START;	// Everything under this is reserved	public static final int END = LexerCore.END;	// End markder.	public static final int PIP = START + 3;	public static final int INVITE = START + 5;	public static final int ACK = START + 6;	public static final int BYE = START + 7;	public static final int CANCEL = START + 9;	public static final int FROM = START + 14;	public static final int TO = START + 15;	public static final int ACCEPT = START + 20;	public static final int ALLOW = START + 21;	public static final int CONTENT_LENGTH = START + 36;	public static final int CONTENT_TYPE = START + 38;	public static final int CONTACT = START + 39;	public static final int CALL_ID = START + 40;	public static final int CSEQ = START + 46;	public static final int ALPHA = LexerCore.ALPHA;	public static final int DIGIT = LexerCore.DIGIT;	public static final int ID = LexerCore.ID;	public static final int WHITESPACE = LexerCore.WHITESPACE;	public static final int BACKSLASH = LexerCore.BACKSLASH;	public static final int QUOTE = LexerCore.QUOTE;	public static final int AT = LexerCore.AT;	public static final int SP = LexerCore.SP;	public static final int HT = LexerCore.HT;	public static final int COLON = LexerCore.COLON;	public static final int STAR = LexerCore.STAR;	public static final int DOLLAR = LexerCore.DOLLAR;	public static final int PLUS = LexerCore.PLUS;	public static final int POUND = LexerCore.POUND;	public static final int MINUS = LexerCore.MINUS;	public static final int DOUBLEQUOTE = LexerCore.DOUBLEQUOTE;	public static final int TILDE = LexerCore.TILDE;	public static final int BACK_QUOTE = LexerCore.BACK_QUOTE;	public static final int NULL = LexerCore.NULL;	public static final int EQUALS = (int) '=';	public static final int SEMICOLON = (int) ';';	public static final int SLASH = (int) '/';	public static final int L_SQUARE_BRACKET = (int) '[';	public static final int R_SQUARE_BRACKET = (int) ']';	public static final int R_CURLY = (int) '}';	public static final int L_CURLY = (int) '{';	public static final int HAT = (int) '^';	public static final int BAR = (int) '|';	public static final int DOT = (int) '.';	public static final int EXCLAMATION = (int) '!';	public static final int LPAREN = (int) '(';	public static final int RPAREN = (int) ')';	public static final int GREATER_THAN = (int) '>';	public static final int LESS_THAN = (int) '<';	public static final int PERCENT = (int) '%';	public static final int QUESTION = (int) '?';	public static final int AND = (int) '&';	public static final int UNDERSCORE = (int) '_';}/* * $Log: TokenTypes.java,v $ * Revision 1.9  2007/01/08 19:24:22  mranga * Issue number: * Obtained from: * Submitted by:  Miguel Freitas * Reviewed by:   mranga * * Miguel -- please implement a deep clone method for the IMS headers. * * CVS: ---------------------------------------------------------------------- * CVS: Issue number: * CVS:   If this change addresses one or more issues, * CVS:   then enter the issue number(s) here. * CVS: Obtained from: * CVS:   If this change has been taken from another system, * CVS:   then name the system in this line, otherwise delete it. * CVS: Submitted by: * CVS:   If this code has been contributed to the project by someone else; i.e., * CVS:   they sent us a patch or a set of diffs, then include their name/email * CVS:   address here. If this is your work then delete this line. * CVS: Reviewed by: * CVS:   If we are doing pre-commit code reviews and someone else has * CVS:   reviewed your changes, include their name(s) here. * CVS:   If you have not had it reviewed then delete this line. * * Revision 1.8  2006/10/12 11:57:54  pmusgrave * Issue number:  79, 80 * Submitted by:  pmusgrave@newheights.com * Reviewed by:   mranga * * Revision 1.7  2006/09/11 18:41:32  mranga * Issue number: * Obtained from: * Submitted by:  mranga * Reviewed by: * Tighter integration of IMS headers. * CVS: ---------------------------------------------------------------------- * CVS: Issue number: * CVS:   If this change addresses one or more issues, * CVS:   then enter the issue number(s) here. * CVS: Obtained from: * CVS:   If this change has been taken from another system, * CVS:   then name the system in this line, otherwise delete it. * CVS: Submitted by: * CVS:   If this code has been contributed to the project by someone else; i.e., * CVS:   they sent us a patch or a set of diffs, then include their name/email * CVS:   address here. If this is your work then delete this line. * CVS: Reviewed by: * CVS:   If we are doing pre-commit code reviews and someone else has * CVS:   reviewed your changes, include their name(s) here. * CVS:   If you have not had it reviewed then delete this line. * * Revision 1.6  2006/07/13 09:01:55  mranga * Issue number: * Obtained from: * Submitted by:  jeroen van bemmel * Reviewed by:   mranga * Moved some changes from jain-sip-1.2 to java.net * * CVS: ---------------------------------------------------------------------- * CVS: Issue number: * CVS:   If this change addresses one or more issues, * CVS:   then enter the issue number(s) here. * CVS: Obtained from: * CVS:   If this change has been taken from another system, * CVS:   then name the system in this line, otherwise delete it. * CVS: Submitted by: * CVS:   If this code has been contributed to the project by someone else; i.e., * CVS:   they sent us a patch or a set of diffs, then include their name/email * CVS:   address here. If this is your work then delete this line. * CVS: Reviewed by: * CVS:   If we are doing pre-commit code reviews and someone else has * CVS:   reviewed your changes, include their name(s) here. * CVS:   If you have not had it reviewed then delete this line. * * Revision 1.4  2006/06/19 06:47:27  mranga * javadoc fixups * * Revision 1.3  2006/06/16 15:26:28  mranga * Added NIST disclaimer to all public domain files. Clean up some javadoc. Fixed a leak * * Revision 1.2  2005/10/27 20:49:00  jeroen * added support for RFC3903 PUBLISH * * Revision 1.1.1.1  2005/10/04 17:12:36  mranga * * Import * * * Revision 1.4  2004/01/22 13:26:32  sverker * Issue number: * Obtained from: * Submitted by:  sverker * Reviewed by:   mranga * * Major reformat of code to conform with style guide. Resolved compiler and javadoc warnings. Added CVS tags. * * CVS: ---------------------------------------------------------------------- * CVS: Issue number: * CVS:   If this change addresses one or more issues, * CVS:   then enter the issue number(s) here. * CVS: Obtained from: * CVS:   If this change has been taken from another system, * CVS:   then name the system in this line, otherwise delete it. * CVS: Submitted by: * CVS:   If this code has been contributed to the project by someone else; i.e., * CVS:   they sent us a patch or a set of diffs, then include their name/email * CVS:   address here. If this is your work then delete this line. * CVS: Reviewed by: * CVS:   If we are doing pre-commit code reviews and someone else has * CVS:   reviewed your changes, include their name(s) here. * CVS:   If you have not had it reviewed then delete this line. * */