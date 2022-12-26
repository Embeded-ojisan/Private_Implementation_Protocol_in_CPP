# 以下を参考に作成
# https://zenn.dev/yagiyuki/articles/b5545c3b546bbeb662bf

# 高速化のため
# https://hangstuck.com/gmake-optimize-suffixes/
 .SUFFIXES:

# コンパイラ
CC  = g++
# コンパイルオプション
CFLAGS = -std=c++17

# サンプルソースのディレクトリパス
SAMPLE	= .

# 追加するライブラリファイル
LIBS    = 

# ライブラリファイルのあるディレクトリパス
LIBDIR  =

# パーサの基底ディレクトリ
PARSERDIR = ../PIP-Message

# オブジェクトのディレクトリパス
BUILD	= .

# インクルードファイルのあるディレクトリパス
INCDIR  = $(PARSERDIR)/src/org/siprop/pip/message/include

sample%:
	rm -f $@.exe
#	$(eval SRCS := $(addprefix $(SAMPLE)/,$@.cpp))
#	$(eval OBJS := $(SRCS:.cpp=.o))
#	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS) -o $(BUILD)/$@.o
#	$(CC) $(BUILD)/sample/$@.o -o $@.exe $^ $(LIBDIR) $(LIBS)

	$(CC) $(CFLAGS) -I $(INCDIR) $@.cpp ../PIP-Message/build/PIP-Message.o -o $@.exe

%:
	$(MAKE) -j8 -C  ../PIP-Message $@