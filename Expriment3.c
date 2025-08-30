// Write a C program to print the value of area of a triangle using user input...

#include<stdio.h>
#include<math.h>

int main(){
    int height, base, area;

    printf("Enter the value  of height  :     ");
    scanf("%d", &height);

    printf("Enter the value  of base  :     ");
    scanf("%d", &base);

    area = 0.5 * height * base;

    ptintf("The area of tringle :%d", area);

    return 0;
}