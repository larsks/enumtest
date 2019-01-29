CC = avr-gcc

all: enumtest-default.s enumtest-short.s

enumtest-default.s: enumtest.c
	$(CC) $(CFLAGS) -S -o $@ $<

enumtest-short.s: enumtest.c
	$(CC) $(CFLAGS) --short-enums -S -o $@ $<

clean:
	rm -f enumtest-default.s enumtest-short.s
