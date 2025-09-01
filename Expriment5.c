//Write a C program to print the value of factorial.......

#include<stdio.h>
#include<math.h>

int main(){

    int fact =1 ,i, n;
    printf("Enter a positive integer :    ");
    scanf("%d",&n );

    if(n<0) {
        printf("Factorial is not  defined of negative number \n");

    }else{
        for(i-1; i<=n; i++) {
            fact = fact * i;
        }
        printf("The value of factorial = %d", fact);
    }
    return 0;
}
