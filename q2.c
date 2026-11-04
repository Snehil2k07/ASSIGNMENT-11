#include <stdio.h>

int num = 100;

int main()
{
    printf("Global variable num = %d\n", num);

    {
        int num = 50;
        printf("Local variable num = %d\n", num);
    }

    printf("Global variable num = %d\n", num);

    return 0;
}