# pwn 0x01 - ret2code

<details>
    <summary>Folder Summary</summary>
    <ul>
        <li><code>/exp</code>: Folder contains testing files.</li>
        <li><code>/src</code>: Folder contains source files.</li>
        <li><code>Dockerfile</code>: Settings for docker.</li>
    </ul>
</details>

## CTFd Settings

- Description:  
  Return to what?  
  `nc chall.nisra.net 42014`
- Hints (None):
- Points: 10pts
- Flag: `NISRA{d0nt_w4nna_ret_2_ma1n}`

## Configs for `docker_compose.yml`

```yaml=
    pwn_0x01:
        build: src/pwn_0x01/.
        image: pwn_0x01
        container_name: pwn_0x01
        restart: always
        ports:
            - "44002:1337"
        privileged: true
        depends_on:
            - pwn_0x00
```
