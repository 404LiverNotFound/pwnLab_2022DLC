#include <stdio.h>

int main()
{
    // ----- clearing buffers -------
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    // ------------------------------

    int a = 0xDEADBEEF;
    char abd[4];
    gets(abd);
    
    if (a == 0x13371337)
    {               //XXXXXXXXXXXXXXXXXXXXX
        printf("NISRA{f1rst_buff3r_0v3rfl0w}\n");
    }
    else
    {
        printf("Stack frame is tamed.\n"
               "My dissapointment is immeasureable.\n");
    }

    return 0;
}
