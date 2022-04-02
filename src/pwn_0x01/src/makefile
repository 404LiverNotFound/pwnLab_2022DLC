all: pwn_0x01

pwn_0x01 : main.c
	gcc -z norelro -z execstack -fno-stack-protector -no-pie -m32 $< -o $@

.PHONY: clean

clean:
	rm ./pwn_0x01