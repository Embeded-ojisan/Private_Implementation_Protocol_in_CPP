# 高速化のため
# https://hangstuck.com/gmake-optimize-suffixes/
 .SUFFIXES:

# コンパイラ
CC  = g++

# コンパイルオプション
CFLAGS = -std=c++2a -g

# ソースコード
SRCS = *.cpp

# フォルダー名
FOLDER = 

# インクルードファイルのあるディレクトリパス
INCDIR  = $(subst $(FOLDER),/include,$(shell pwd))

# ソースディレクトリパス
SRCDIR = src/org/siprop/pip/message

# オブジェクト格納用ディレクトリパス
BUILDDIR = $(subst $(SRCDIR),build/$(SRCDIR),$(shell pwd))

%:
	@echo  "\n"
	@echo  "\n"
	@echo  "\n"
	
	$(MAKE) -j8 -C  ../message/address $@
	$(MAKE) -j8 -C  ../message/header $@
	$(MAKE) -j8 -C  ../message/parser $@
	$(MAKE) -j8 -C  ../message/util $@

	ar -r $(BUILDDIR)/Address.o $(BUILDDIR)/address/Address.o $(BUILDDIR)/address/AddressFactory.o $(BUILDDIR)/address/Authority.o $(BUILDDIR)/address/NetObject.o $(BUILDDIR)/address/NetObjectList.o $(BUILDDIR)/address/ParameterNames.o $(BUILDDIR)/address/PipUri.o $(BUILDDIR)/address/TelephoneNumber.o $(BUILDDIR)/address/URI.o $(BUILDDIR)/address/UserInfo.o
	ar -r $(BUILDDIR)/Header.o $(BUILDDIR)/header/AddressParametersHeader.o $(BUILDDIR)/header/AllowHeader.o $(BUILDDIR)/header/CallIdentifier.o $(BUILDDIR)/header/ContactHeader.o $(BUILDDIR)/header/ContactList.o $(BUILDDIR)/header/ContentLengthHeader.o $(BUILDDIR)/header/ContentTypeHeader.o $(BUILDDIR)/header/CSeqHeader.o $(BUILDDIR)/header/ExtensionHeader.o $(BUILDDIR)/header/ExtensionHeaderList.o $(BUILDDIR)/header/FromHeader.o $(BUILDDIR)/header/HeaderAddress.o $(BUILDDIR)/header/HeaderFactory.o $(BUILDDIR)/header/Indentation.o $(BUILDDIR)/header/MediaRange.o $(BUILDDIR)/header/NameMap.o $(BUILDDIR)/header/ParameterNames.o $(BUILDDIR)/header/Parameters.o $(BUILDDIR)/header/ParametersHeader.o $(BUILDDIR)/header/PIPHeader.o $(BUILDDIR)/header/PIPHeaderNames.o $(BUILDDIR)/header/PIPObject.o $(BUILDDIR)/header/Protocol.o $(BUILDDIR)/header/RequestLine.o $(BUILDDIR)/header/StatusLine.o $(BUILDDIR)/header/ToHeader.o
	ar -r $(BUILDDIR)/Parser.o $(BUILDDIR)/parser/AddressParametersParser.o $(BUILDDIR)/parser/AddressParser.o $(BUILDDIR)/parser/CallIDParser.o $(BUILDDIR)/parser/ContactParser.o $(BUILDDIR)/parser/ContentLengthParser.o $(BUILDDIR)/parser/ContentTypeParser.o $(BUILDDIR)/parser/CSeqParser.o $(BUILDDIR)/parser/FromParser.o $(BUILDDIR)/parser/HeaderParser.o $(BUILDDIR)/parser/Lexer.o $(BUILDDIR)/parser/ParametersParser.o $(BUILDDIR)/parser/ParseExceptionListener.o $(BUILDDIR)/parser/Parser.o $(BUILDDIR)/parser/ParserFactory.o $(BUILDDIR)/parser/RequestLineParser.o $(BUILDDIR)/parser/StatusLineParser.o $(BUILDDIR)/parser/StringMsgParser.o $(BUILDDIR)/parser/TokenNames.o $(BUILDDIR)/parser/TokenTypes.o $(BUILDDIR)/parser/ToParser.o $(BUILDDIR)/parser/URLParser.o
	ar -r $(BUILDDIR)/Util.o $(BUILDDIR)/util/Debug.o $(BUILDDIR)/util/GenericObject.o $(BUILDDIR)/util/GenericObjectList.o $(BUILDDIR)/util/HeaderIterator.o $(BUILDDIR)/util/Host.o $(BUILDDIR)/util/HostNameParser.o $(BUILDDIR)/util/HostPort.o $(BUILDDIR)/util/InternalErrorHandler.o $(BUILDDIR)/util/InvalidArgumentException.o $(BUILDDIR)/util/LexerCore.o $(BUILDDIR)/util/ListMap.o $(BUILDDIR)/util/Match.o $(BUILDDIR)/util/NameValue.o $(BUILDDIR)/util/NameValueList.o $(BUILDDIR)/util/ParserCore.o $(BUILDDIR)/util/PIPConstants.o $(BUILDDIR)/util/PIPDuplicateHeaderException.o $(BUILDDIR)/util/PipException.o $(BUILDDIR)/util/Separators.o $(BUILDDIR)/util/StringTokenizer.o $(BUILDDIR)/util/Token.o $(BUILDDIR)/util/Utils.o

	@echo  "\n"
	@echo  "\n"
	@echo  "\n"

	$(eval SRCS := MessageFactory)
	$(eval OBJS := MessageFactory)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := MessageObject)
	$(eval OBJS := MessageObject)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPMessage)
	$(eval OBJS := PIPMessage)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPRequest)
	$(eval OBJS := PIPRequest)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPResponse)
	$(eval OBJS := PIPResponse)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := macro)
	$(eval OBJS := macro)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	@echo  "\n"
	@echo  "\n"
	@echo  "\n"

Address:
	$(MAKE) -j8 -C  ../message/address $@
	ar -r $(BUILDDIR)/Address.o $(BUILDDIR)/address/Address.o $(BUILDDIR)/address/AddressFactory.o $(BUILDDIR)/address/Authority.o $(BUILDDIR)/address/NetObject.o $(BUILDDIR)/address/NetObjectList.o $(BUILDDIR)/address/ParameterNames.o $(BUILDDIR)/address/PipUri.o $(BUILDDIR)/address/TelephoneNumber.o $(BUILDDIR)/address/URI.o $(BUILDDIR)/address/UserInfo.o

Header:
	$(MAKE) -j8 -C  ../message/header $@
	ar -r $(BUILDDIR)/Header.o $(BUILDDIR)/header/AddressParametersHeader.o $(BUILDDIR)/header/AllowHeader.o $(BUILDDIR)/header/CallIdentifier.o $(BUILDDIR)/header/ContactHeader.o $(BUILDDIR)/header/ContactList.o $(BUILDDIR)/header/ContentLengthHeader.o $(BUILDDIR)/header/ContentTypeHeader.o $(BUILDDIR)/header/CSeqHeader.o $(BUILDDIR)/header/ExtensionHeader.o $(BUILDDIR)/header/ExtensionHeaderList.o $(BUILDDIR)/header/FromHeader.o $(BUILDDIR)/header/HeaderAddress.o $(BUILDDIR)/header/HeaderFactory.o $(BUILDDIR)/header/Indentation.o $(BUILDDIR)/header/MediaRange.o $(BUILDDIR)/header/NameMap.o $(BUILDDIR)/header/ParameterNames.o $(BUILDDIR)/header/Parameters.o $(BUILDDIR)/header/ParametersHeader.o $(BUILDDIR)/header/PIPHeader.o $(BUILDDIR)/header/PIPHeaderNames.o $(BUILDDIR)/header/PIPObject.o $(BUILDDIR)/header/Protocol.o $(BUILDDIR)/header/RequestLine.o $(BUILDDIR)/header/StatusLine.o $(BUILDDIR)/header/ToHeader.o

Parser:
	$(MAKE) -j8 -C  ../message/parser $@
	ar -r $(BUILDDIR)/Parser.o $(BUILDDIR)/parser/AddressParametersParser.o $(BUILDDIR)/parser/AddressParser.o $(BUILDDIR)/parser/CallIDParser.o $(BUILDDIR)/parser/ContactParser.o $(BUILDDIR)/parser/ContentLengthParser.o $(BUILDDIR)/parser/ContentTypeParser.o $(BUILDDIR)/parser/CSeqParser.o $(BUILDDIR)/parser/FromParser.o $(BUILDDIR)/parser/HeaderParser.o $(BUILDDIR)/parser/Lexer.o $(BUILDDIR)/parser/ParametersParser.o $(BUILDDIR)/parser/ParseExceptionListener.o $(BUILDDIR)/parser/Parser.o $(BUILDDIR)/parser/ParserFactory.o $(BUILDDIR)/parser/RequestLineParser.o $(BUILDDIR)/parser/StatusLineParser.o $(BUILDDIR)/parser/StringMsgParser.o $(BUILDDIR)/parser/TokenNames.o $(BUILDDIR)/parser/TokenTypes.o $(BUILDDIR)/parser/ToParser.o $(BUILDDIR)/parser/URLParser.o

Util:
	$(MAKE) -j8 -C  ../message/util $@
	ar -r $(BUILDDIR)/Util.o $(BUILDDIR)/util/Debug.o $(BUILDDIR)/util/GenericObject.o $(BUILDDIR)/util/GenericObjectList.o $(BUILDDIR)/util/HeaderIterator.o $(BUILDDIR)/util/Host.o $(BUILDDIR)/util/HostNameParser.o $(BUILDDIR)/util/HostPort.o $(BUILDDIR)/util/InternalErrorHandler.o $(BUILDDIR)/util/InvalidArgumentException.o $(BUILDDIR)/util/LexerCore.o $(BUILDDIR)/util/ListMap.o $(BUILDDIR)/util/Match.o $(BUILDDIR)/util/NameValue.o $(BUILDDIR)/util/NameValueList.o $(BUILDDIR)/util/ParserCore.o $(BUILDDIR)/util/PIPConstants.o $(BUILDDIR)/util/PIPDuplicateHeaderException.o $(BUILDDIR)/util/PipException.o $(BUILDDIR)/util/Separators.o $(BUILDDIR)/util/StringTokenizer.o $(BUILDDIR)/util/Token.o $(BUILDDIR)/util/Utils.o

Src:
	@echo  "\n"
	@echo  "\n"
	@echo  "\n"

	$(eval SRCS := MessageFactory)
	$(eval OBJS := MessageFactory)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := MessageObject)
	$(eval OBJS := MessageObject)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPMessage)
	$(eval OBJS := PIPMessage)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPRequest)
	$(eval OBJS := PIPRequest)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPResponse)
	$(eval OBJS := PIPResponse)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := macro)
	$(eval OBJS := macro)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	@echo  "\n"
	@echo  "\n"
	@echo  "\n"
