# 以下を参考に作成
# https://zenn.dev/yagiyuki/articles/b5545c3b546bbeb662bf

# コンパイラ
CC  = g++
# コンパイルオプション
CFLAGS    =
# 実行ファイル名
TARGET  = Main
# コンパイル対象のソースコード
SRCS    = Main.cpp
# オブジェクトファイル名
OBJS    = $(SRCS:.cpp=.o)

# ソースファイルの基底ディレクトリ
SRCDIR = ./src/org/siprop/pip/message

# インクルードファイルのあるディレクトリパス
INCDIR  =\
	$(SRCDIR)/include

# サンプルソースのディレクトリパス
SAMPLE	=\
	$(SRCDIR)/sample

# オブジェクトのディレクトリパス
BUILD	=\
	./build

# ライブラリファイルのあるディレクトリパス
LIBDIR  =\
	.$(BUILD)

# 追加するライブラリファイル
LIBS    = 

# オブジェクトファイル生成→ターゲットファイル生成
sample%:
	-rm -Rf $@ $@.o
	$(eval SRCS := $(addprefix $(SRCDIR)/sample/,$@.cpp))
	$(eval OBJS := $(SRCS:.cpp=.o))
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRCS) -o $(BUILD)/sample/$@.o
	$(CC) $(BUILD)/sample/$@.o -o $(BUILD)/$@ $^ $(LIBDIR) $(LIBS)

clean-sample:
	rm -Rf build/sample_* build/sample/sample_*.o

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