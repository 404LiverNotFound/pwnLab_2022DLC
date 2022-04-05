#include <stdio.h>
#include <string.h>

int still_c4nt_c_me_yet()
{
    printf("> NISRA{XXXXXXXXXXXXXXXXXXXXX}\n");
    exit(0);
}

void another_vuln()
{
    char buf[0x69];
    printf("> Input plz: ");
    read(0, buf, 0x420);

    if (strlen(buf) > 0x69)
    {
        printf("\n"
               "> Nope.\n");
    }
    else
    {
        printf("\n"
               "> Things could happen any second now...\n");
    }

    return;
}

int main()
{
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    another_vuln();

    return 0;
}