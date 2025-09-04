//Write a C program to check the number is positive or negative....

#include<stdio.h>
int main(){
    int n;
    printf("Enter  your number  :      ");
    scanf("%d", &n);

    if(n>0){
        printf("%d is a positive number ");
    }else if( n==0 ){
        printf("%d is equal with zero");
    }else{
        printf("%d is negative number ");
    }

    return 0;
}