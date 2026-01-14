# =============================================================================
#
# Makefile
#
# =============================================================================

CC := gcc
CXX := g++

EXECUTABLE := tinybasic
BUILD_DIR := build
TARGET := debug

ifeq (${TARGET}, release)
	CFLAGS := ${CFLAGS} -O3
endif

CFLAGS := ${CFLAGS} -Wall -Wextra -g

INC_DIRS := -I./src/core \
			-I./src/lexer \
			-I./src

SRCS := $(shell find ${SRC_DIRS} -name '*.c')
OBJS := $(SRCS:%=${BUILD_DIR}/${TARGET}/%.o)

all: clean ${BUILD_DIR}/${TARGET}/bin/${EXECUTABLE}

${BUILD_DIR}/${TARGET}/bin/${EXECUTABLE}: ${OBJS}
	mkdir -p $(dir $@)
	${CXX} ${OBJS} -o $@ ${LDFLAGS}

$(BUILD_DIR)/${TARGET}/%.c.o: %.c
	mkdir -p $(dir $@)
	${CC} ${CFLAGS} ${INC_DIRS} -c $< -o $@


clean:
	rm -r ./${BUILD_DIR}/

.PHONY: clean all
