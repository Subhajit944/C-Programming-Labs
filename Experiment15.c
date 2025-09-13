/* Write a C program using switch case to find the value of y using below formula

y(x,n)= 1+x                 when n = 1
1 + x/n                     when n = 2
1+x^n                       when n = 3
1 = x*x                     when n>3 or n<1  */

#include<stdio.h>
#include<math.h>


int main(){


int n;
float x,y;
printf("Enter  value of x :         ");
scanf("%f", &x);

printf("Enter  value of n :         ");
scanf("%d", &n);

switch(n){
    case1:
    y = 1 + x;
    break;

    case2:
    y = 1 + (x/n);
    break;

    case3:
    y = 1 + pow(x,n);
    break;

}

printf("Value of y = %2f\n", y);
return 0;

}
