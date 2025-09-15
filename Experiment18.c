//Write a  program in c to sum of 1 to n numbers......
#include<stdio.h>

int main(){

int sum=0,n;

printf("enter your value of n:");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    sum+=i;
}
printf("The value of sum:%d",sum);
return 0;
}
 