//Write a C program to  print the value of addition two numbers

#include<stdio.h>
#include<math.h>

int main(){
    int A ,B, c;
    printf("Enter a number A :    ");
    scanf("%d", &A);

    printf("Enter a number B :    ");
    scanf("%d", &B);

    c = A + B;

    printf("The value of adition : %d", c);
    return 0;
}