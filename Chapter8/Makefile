# 以下を参考に作成
# https://zenn.dev/yagiyuki/articles/b5545c3b546bbeb662bf

# コンパイラ
CC  = g++
# コンパイルオプション
CFLAGS    =

# サンプルソースのディレクトリパス
SAMPLE	= .

# 追加するライブラリファイル
LIBS    = 

# ライブラリファイルのあるディレクトリパス
LIBDIR  =
###########################################
# パーサの基底ディレクトリ
PARSERDIR = ../PIP-Message

# オブジェクトのディレクトリパス
BUILD	=\
	$(PARSERDIR)/build

# ソースファイルの基底ディレクトリ
SRCDIR = $(PARSERDIR)/src/org/siprop/pip/message
###########################################
BUILD_ALL	=\
	$(BUILD)\
	$(BUILD)/sample\
	$(BUILD)//src/org/siprop/pip/message/address\
	$(BUILD)//src/org/siprop/pip/message/header\
	$(BUILD)//src/org/siprop/pip/message/parser\
	$(BUILD)//src/org/siprop/pip/message/util
###########################################
# インクルードファイルのあるディレクトリパス
INCDIR  =\
	$(SRCDIR)/include
###########################################
# オブジェクトファイル生成→ターゲットファイル生成
sample%:
	rm -f $@
	$(eval SRCS := $(addprefix $(SAMPLE)/,$@.cpp))
	$(eval OBJS := $(SRCS:.cpp=.o))
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS) -o $(BUILD)/sample/$@.o
	$(CC) $(BUILD)/sample/$@.o -o $@.exe $^ $(LIBDIR) $(LIBS)

clean-sample:
	rm -Rf $(PARSERDIR)/sample/sample*.o sample*.exe

clean-all:
	rm -Rf\
		sample*.exe\
		$(BUILD_ALL)/*.exe\
		$(BUILD_ALL)/*.o

# 以下残骸 ############################################
# ターゲットファイル生成
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)
	
# オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS)

# "make all"で make cleanとmakeを同時に実施。
all: clean $(OBJS) $(TARGET)
# .oファイル、実行ファイル、.dファイルを削除
clean:
	-rm -rf $(OBJS) $(TARGET) *.d *.o