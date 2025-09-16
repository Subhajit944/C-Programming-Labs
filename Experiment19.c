// Write a program in c  to fined the factorial of a number 

#include<stdio.h>

int main(){

    int i,n,fact=1;

    printf("Enter a number of n:   ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("The value is:%d",fact);
    return 0;
}