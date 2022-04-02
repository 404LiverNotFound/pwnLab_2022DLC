all: pwn_0x02

pwn_0x02 : main.c
	gcc -z norelro -z execstack -fno-stack-protector -no-pie -m32 $< -o $@

.PHONY: clean

clean:
	rm ./pwn_0x02