#include <stdio.h>

int cant_c_me_lol()
{
    printf("\n"
           "> Congrats!!!\n"
           "> NISRA{XXXXXXXXXXXXXXXXXXXXX}\n");
    exit(0);
}                 

void vuln()
{
    char buf[69];
    printf("> Cast ur special spell(): ");
    gets(buf);
}

int main()
{
    // ----- clearing buffers -------
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    // ------------------------------

    vuln();

    return 0;
}
