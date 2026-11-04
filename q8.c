int num = 50;
#include <stdio.h>

extern int num;

int main()
{
    printf("Value of num = %d\n", num);

    return 0;
}