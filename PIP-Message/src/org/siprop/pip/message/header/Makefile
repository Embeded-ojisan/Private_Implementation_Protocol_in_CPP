# コンパイラ
CC  = g++

# コンパイルオプション
CFLAGS = -std=c++17

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

	$(eval SRCS := )
	$(eval OBJS := )
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := )
	$(eval OBJS := )
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := )
	$(eval OBJS := )
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := )
	$(eval OBJS := )
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := )
	$(eval OBJS := )
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := )
	$(eval OBJS := )
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := )
	$(eval OBJS := )
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o