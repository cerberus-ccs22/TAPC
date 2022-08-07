#CC=riscv64-unknown-linux-musl-gcc
CC=gcc
CFLAGS?=-O
LIBS=`[ \`uname\` = "SunOS" ] && echo -lsocket -lnsl`

all: darkhttpd

darkhttpd: darkhttpd.c
	$(CC) $(CFLAGS) $(LDFLAGS) $(LIBS) darkhttpd.c -o $@

darkhttpd-static: darkhttpd.c
	$(CC) -static $(CFLAGS) $(LDFLAGS) $(LIBS) darkhttpd.c -o $@

clean:
	rm -f darkhttpd core darkhttpd.core darkhttpd-static darkhttpd-static.core

.PHONY: all clean
