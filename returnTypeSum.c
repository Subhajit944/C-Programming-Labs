// using return type function:

#include <stdio.h>
int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int x, y, sum;
    printf("Enter two number x and y :");
    scanf("%d %d", &x, &y);
    sum = add(x, y);
    printf("sum of two number = %d", sum);
}
