CFLAGS=-m32 -O0
SEC=-fno-stack-protector -z norelro -z execstack -no-pie

all: pwn_0x02

pwn_0x02 : main.c
	gcc $(CFLAGS) $(SEC) -static $< -o $@

.PHONY: clean

clean:
	rm ./pwn_0x02