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
FOLDER = parser

# インクルードファイルのあるディレクトリパス
INCDIR  = $(subst $(FOLDER),include,$(shell pwd))

# ソースディレクトリパス
SRCDIR = src/org/siprop/pip/message

# オブジェクト格納用ディレクトリパス
BUILDDIR = $(subst $(SRCDIR),build/$(SRCDIR),$(shell pwd))

%:
	@echo  "\n"
	@echo  "\n"
	@echo  "\n"
	
	$(eval SRCS := AddressParametersParser)
	$(eval OBJS := AddressParametersParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := AddressParser)
	$(eval OBJS := AddressParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := CallIDParser)
	$(eval OBJS := CallIDParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := ContactParser)
	$(eval OBJS := ContactParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := ContentLengthParser)
	$(eval OBJS := ContentLengthParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := ContentTypeParser)
	$(eval OBJS := ContentTypeParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := CSeqParser)
	$(eval OBJS := CSeqParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := FromParser)
	$(eval OBJS := FromParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := HeaderParser)
	$(eval OBJS := HeaderParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := Lexer)
	$(eval OBJS := Lexer)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := ParametersParser)
	$(eval OBJS := ParametersParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := ParseExceptionListener)
	$(eval OBJS := ParseExceptionListener)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := Parser)
	$(eval OBJS := Parser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := ParserFactory)
	$(eval OBJS := ParserFactory)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := RequestLineParser)
	$(eval OBJS := RequestLineParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := StatusLineParser)
	$(eval OBJS := StatusLineParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := StringMsgParser)
	$(eval OBJS := StringMsgParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := TokenNames)
	$(eval OBJS := TokenNames)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := TokenTypes)
	$(eval OBJS := TokenTypes)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := ToParser)
	$(eval OBJS := ToParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := URLParser)
	$(eval OBJS := URLParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
