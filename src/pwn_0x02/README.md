# pwn 0x02 - A little twist

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
  Dafuq is dis? Now what?  
  `nc chall.nisra.net 42015`
- Hints (None):
- Points: 10pts
- Flag: `NISRA{add3d_4nn0y1ng_strl3n}`

## Configs for `docker_compose.yml`

```yaml=
    pwn_0x02:
        build: src/pwn_0x02/.
        image: pwn_0x02
        container_name: pwn_0x02
        restart: always
        ports:
            - "44003:1337"
        privileged: true
        depends_on:
            - pwn_0x01
```
