CC = clang
FLAGS = -Iinclude -Iplatform/include -fPIC -shared -Wall -Wextra -Wpedantic -fvisibility=hidden -DTKEXPORT_SYMBOLS_FLAG
LIBS =
FILES = $(shell find ./src -type f -name "*.c")
OUT = ./toolkit.lib

PLATFORM = ./platform/linux
PLATFORMFLAGS = -I$(platform)/include -Ilib/linux/include
PLATFORMLIBS = -Llib/linux -lglfw
PLATFORMFILES = $(shell find ./platform/linux/src -type f -name "*.c")

all:
	$(CC) $(FLAGS) $(PLATFORMFLAGS) $(LIBS) $(PLATFORMLIBS) $(FILES) $(PLATFORMFILES) -o $(OUT)
