//
#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    if (*ptr % 2 == 0)
        printf("%d is Even\n", *ptr);
    else
        printf("%d is Odd\n", *ptr);

    return 0;
}
