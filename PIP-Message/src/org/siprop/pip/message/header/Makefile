# 高速化のため
# https://hangstuck.com/gmake-optimize-suffixes/
 .SUFFIXES:

# コンパイラ
CC  = g++

# コンパイルオプション
CFLAGS = -std=c++2a -g3 -Wall -Wextra -Wconversion

# ソースコード
SRCS = *.cpp

# フォルダー名
FOLDER = header

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
	
	$(eval SRCS := AddressParametersHeader)
	$(eval OBJS := AddressParametersHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := AllowHeader)
	$(eval OBJS := AllowHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := CallIdentifier)
	$(eval OBJS := CallIdentifier)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ContactHeader)
	$(eval OBJS := ContactHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ContactList)
	$(eval OBJS := ContactList)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ContentLengthHeader)
	$(eval OBJS := ContentLengthHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ContentTypeHeader)
	$(eval OBJS := ContentTypeHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := CSeqHeader)
	$(eval OBJS := CSeqHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ExtensionHeader)
	$(eval OBJS := ExtensionHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ExtensionHeaderList)
	$(eval OBJS := ExtensionHeaderList)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := FromHeader)
	$(eval OBJS := FromHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := HeaderAddress)
	$(eval OBJS := HeaderAddress)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := HeaderFactory)
	$(eval OBJS := HeaderFactory)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := Indentation)
	$(eval OBJS := Indentation)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := MediaRange)
	$(eval OBJS := MediaRange)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := NameMap)
	$(eval OBJS := NameMap)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ParameterNames)
	$(eval OBJS := ParameterNames)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := Parameters)
	$(eval OBJS := Parameters)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ParametersHeader)
	$(eval OBJS := ParametersHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPHeader)
	$(eval OBJS := PIPHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPHeaderList)
	$(eval OBJS := PIPHeaderList)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPHeaderNames)
	$(eval OBJS := PIPHeaderNames)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PIPObject)
	$(eval OBJS := PIPObject)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := Protocol)
	$(eval OBJS := Protocol)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := RequestLine)
	$(eval OBJS := RequestLine)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := StatusLine)
	$(eval OBJS := StatusLine)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ToHeader)
	$(eval OBJS := ToHeader)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o
