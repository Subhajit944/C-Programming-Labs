//Write a menu drive program to calculate the area  of reactangle , square and circle using switch case

#include<stdio.h>
#include<math.h>

int main(){
    int choice;
    float length, breadth, side, radius, area;

    printf("Area calculation menu:      \n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");
    printf("Enter your choice(1 to 3) :       ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("Enter length and breadth:      ");
        scanf("%f %f", &length, &breadth);
        area =  length * breadth;

        printf("Area of ractangle = %2f\n", area);
        break;

        case 2:
        printf("Enter side of square:      ");
        scanf("%f", &side);
        area =  side * side;

        printf("Area of square = %2f\n", area);
        break;

        case 3:
        printf("Enter radius of circle:      ");
        scanf("%f ", &radius);
        area = radius * radius;

        printf("Area of circle = %2f\n", area);
        break;

        
        default:
        printf("Invalid choice! Please enter 1,2 or 3\n");
    }

    return 0;

}