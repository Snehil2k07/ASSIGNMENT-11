#include <stdio.h>

void display()
{
    auto int a = 10;
    printf("Value of automatic variable: %d\n", a);
}

int main()
{
    printf("First function call:\n");
    display();

    printf("Second function call:\n");
    display();

    return 0;
}