//Write a C program to implement the simple calculator using switch case.......

#include<stdio.h>

int main(){
    int num1, num2, choice , result;

    printf("Press 1 for addition :   ");
    printf("Press 2 for multiplication :   ");
    printf("Press 3 for divition :     ");
    printf("Press 4 for subtraction :     ");

    printf("Enter two number :        ");
    scanf("%d %d ", &num1, &num2);
    printf("Enter the choice :      ");
    scanf("%d", &choice);

    switch(choice) {
        case1 : result = num1 + num2;
        printf("sum of two numbers :  %d", result);
        break;

        case2 : result = num1 * num2;
        printf("multiplication of two numbers :  %d", result);
        break;

        case3 : result = num1 / num2;
        printf("divition of two numbers :  %d", result);
        break;

        case4 : result = num1 - num2;
        printf("subtraction of two numbers :  %d", result);
        break;

        default : 
        printf("Worng choice");

        
    }
    return 0;
}