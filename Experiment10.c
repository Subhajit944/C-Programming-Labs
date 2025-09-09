//Write a C program to check which divisible by 5 and 11 both or not.....

#include<stdio.h>

int main(){
    int number;

    printf("Enter a number :      ");
    scanf("%d", &number);

    if(number % 5 == 0  && number % 11 == 0) {
        printf("%d is divisible by 5 and 11 both\n", number);
    }else{
        printf("%d isn not divisible by both\n", number);
    }

    return 0;
}