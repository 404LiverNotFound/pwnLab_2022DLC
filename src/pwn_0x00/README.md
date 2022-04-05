# pwn 0x00 - bof

<details>
    <summary>Folder Summary</summary>
    <ul>
        <li><code>/exp</code>: Folder contains testing/public files.</li>
        <li><code>/src</code>: Folder contains source files.</li>
        <li><code>Dockerfile</code>: Settings for docker.</li>
    </ul>
</details>

## CTFd Settings

- Description:  
    Buffer overflow.  
    `nc chall.nisra.net 44001`
- Hints (None):
- Points: 10pts
- Flag: `NISRA{f1rst_buff3r_0v3rfl0w}`

## Configs for `docker_compose.yml`

```yaml=
    pwn_0x00:
        build: src/pwn_0x00/.
        image: pwn_0x00
        container_name: pwn_0x00
        restart: always
        ports:
                - "44001:1337"
        privileged: true
```
