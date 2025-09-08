//Write a c program to check greater number among two number.......

#include<stdio.h>

int main(){
    int A , B;
    printf("Enter a  number  A :     ");
    scanf("%d", &A);
    printf("Enter a  number  B :     ");
    scanf("%d", &B);

    if(A > B) {
        printf("%d is greater\n",A);
        
    }else{
         printf("%d is greater\n",B);
         
    }

     return 0;
}