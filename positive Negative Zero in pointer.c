//
#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    ptr = &num;

    if (*ptr > 0)
        printf("%d is a Positive number.\n", *ptr);
    else if (*ptr < 0)
        printf("%d is a Negative number.\n", *ptr);
    else
        printf("Number is Zero\n");

    return 0;
}
