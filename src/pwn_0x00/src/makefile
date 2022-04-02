all: pwn_0x00

pwn_0x00 : main.c
	gcc -z norelro -z execstack -fno-stack-protector -no-pie -m32 $< -o $@

.PHONY: clean

clean:
	rm ./pwn_0x00