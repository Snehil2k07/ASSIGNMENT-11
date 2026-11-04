#include <stdio.h>

void display()
{
    auto int a = 1;
    static int s = 1;

    printf("Automatic variable = %d\n", a);
    printf("Static variable = %d\n", s);

    a++;
    s++;
}

int main()
{
    printf("First Call:\n");
    display();

    printf("\nSecond Call:\n");
    display();

    printf("\nThird Call:\n");
    display();

    return 0;
}