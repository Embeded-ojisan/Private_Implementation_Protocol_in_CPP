# コンパイラ
CC  = g++

# コンパイルオプション
CFLAGS = -std=c++17

# ソースコード
SRCS = *.cpp

# フォルダー名
FOLDER = address

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
	$(eval SRCS := Address)
	$(eval OBJS := Address)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := AddressFactory)
	$(eval OBJS := AddressFactory)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := Authority)
	$(eval OBJS := Authority)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := NetObject)
	$(eval OBJS := NetObject)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := NetObjectList)
	$(eval OBJS := NetObjectList)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := ParameterNames)
	$(eval OBJS := ParameterNames)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := PipUri)
	$(eval OBJS := PipUri)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := TelephoneNumber)
	$(eval OBJS := TelephoneNumber)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := URI)
	$(eval OBJS := URI)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o

	$(eval SRCS := UserInfo)
	$(eval OBJS := UserInfo)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS).cpp -o $(BUILDDIR)/$(OBJS).o