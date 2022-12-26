# 高速化のため
# https://hangstuck.com/gmake-optimize-suffixes/
 .SUFFIXES:

# コンパイラ
CC  = g++

# コンパイルオプション
CFLAGS = -std=c++17

# ソースコード
SRCS = *.cpp

# フォルダー名
FOLDER = util

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
	
	$(eval SRCS := Debug)
	$(eval OBJS := Debug)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := GenericObject)
	$(eval OBJS := GenericObject)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := GenericObjectList)
	$(eval OBJS := GenericObjectList)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := HeaderIterator)
	$(eval OBJS := HeaderIterator)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := Host)
	$(eval OBJS := Host)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := HostNameParser)
	$(eval OBJS := HostNameParser)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := HostPort)
	$(eval OBJS := HostPort)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := InternalErrorHandler)
	$(eval OBJS := InternalErrorHandler)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval OBJS := InvalidArgumentException)
	$(eval SRCS := InvalidArgumentException)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := LexerCore)
	$(eval OBJS := LexerCore)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := ListMap)
	$(eval OBJS := ListMap)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := Match)
	$(eval OBJS := Match)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := NameValue)
	$(eval OBJS := NameValue)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := NameValueList)
	$(eval OBJS := NameValueList)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ParserCore)
	$(eval OBJS := ParserCore)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := PIPConstants)
	$(eval OBJS := PIPConstants)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := PIPDuplicateHeaderException)
	$(eval OBJS := PIPDuplicateHeaderException)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := PipException)
	$(eval OBJS := PipException)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := Separators)
	$(eval OBJS := Separators)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := StringTokenizer)
	$(eval OBJS := StringTokenizer)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := Token)
	$(eval OBJS := Token)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
	
	$(eval SRCS := Utils)
	$(eval OBJS := Utils)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
