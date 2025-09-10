//Write a c program to check a year is leap year or not......

#include<stdio.h>

int main(){
    int year;
    printf("Enter a year :    ");
    scanf("%d" , &year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        printf("%d is a leap year\n", year);
    }else{
        printf("%d is  nt a leap yaer\n", year);
    }

    return 0;
}