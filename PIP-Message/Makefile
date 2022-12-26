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
FOLDER = 

# インクルードファイルのあるディレクトリパス
INCDIR  = $(subst $(FOLDER),/include,$(shell pwd))

# ソースディレクトリパス
SRCDIR = 

# オブジェクト格納用ディレクトリパス
BUILDDIR = $(subst $(SRCDIR),/build$(SRCDIR),$(shell pwd))

TMP = $(BUILDDIR)/src/org/siprop/pip/message

%:
	$(MAKE) -j8 -C  ../PIP-Message/src/org/siprop/pip/message $@
	ar -r $(BUILDDIR)/PIP-Message.o $(TMP)/MessageFactory.o $(TMP)/MessageObject.o $(TMP)/PIPMessage.o $(TMP)/PIPRequest.o $(TMP)/PIPResponse.o $(TMP)/Address.o $(TMP)/Header.o $(TMP)/Parser.o $(TMP)/Util.o
