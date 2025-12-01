
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

SRCS := $(wildcard *.c)
MAINS_SRC := $(shell grep -l "int main" $(SRCS) 2>/dev/null || true)
MAINS := $(patsubst %.c,%,$(MAINS_SRC))
HELPERS := $(filter-out $(MAINS_SRC),$(SRCS))
OBJS := $(patsubst %.c,%.o,$(HELPERS))

BIN_DIR := bin
BIN_PROGS := $(addprefix $(BIN_DIR)/,$(MAINS))

all: $(BIN_PROGS)

$(BIN_DIR)/%: %.c $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $< $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN_DIR) *.o

.PHONY: all clean
