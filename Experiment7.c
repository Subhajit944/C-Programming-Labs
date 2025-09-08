//Write a C program to check the number is odd or even......

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number  :   ");
    scanf("%d", &n);

    if( n % 2 == 0) {
        printf("%d is a  even number ");

    }else{
        printf("%d is a odd number ");
    }

    return 0;
}