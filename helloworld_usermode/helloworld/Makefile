# Makefile
ALL := hello
all: $(ALL)
CC=${CROSS_COMPILE}gcc

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

.PHONY: clean
clean:
	rm -f $(ALL)
