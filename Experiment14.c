//Write a C program to convert temperature in centigrade to fahreheit and vice versa using switch case......

#include<stdio.h>

int main(){
    float celsius, fahrenheit ;
    int choice;
    

    printf("Temperature conversion menu\n");
    printf("1. Calsius to Fahrenheit\n");
    printf("2. fahrenheit to celsius\n");
    printf("Enter your choice (1 or 2) :    ");
    scanf("%d", &choice);

    switch(choice){
        case 1 :
        printf("Enter temperature in calsius :    ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("temperature in fahrenheit :   %2f\n", fahrenheit);
        break;

        case 2 :
        printf("Enter temperature in fahrenheit :    ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("temperature in celsius :   %2f\n", celsius);
        break;

        default:
            printf("Invalid choice !  Please enter 1 or 2 \n");

    }

    return 0;

}