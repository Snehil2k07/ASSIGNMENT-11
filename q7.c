#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;

    printf("Enter 5 array elements:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        register int j = arr[i];
        sum = sum + j;
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}