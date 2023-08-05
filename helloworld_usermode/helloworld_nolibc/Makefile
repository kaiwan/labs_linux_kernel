# Makefile
csrc := $(wildcard *.c)
# Convert src to obj's
objs := $(csrc:.c=.o)

ALL := hello_no_libc
all: $(ALL)

CC=${CROSS_COMPILE}gcc

myapp: $(objs)
	@echo "[DBG] csrc = $(csrc), objs = $(objs), @ = $@, ^ = $^"
	@echo "[DBG] build rule: \
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)"
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

#hello_no_libc: hello_no_libc.c.c
#	gcc

.PHONY: clean
clean:
	rm -f $(objs) $(ALL)
