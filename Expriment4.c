//Write a C program to print the area  of circle.......

#include<stdio.h>
#include<math.h>

int main(){
    float radius , area ;
    printf("Enter the radius of the circle:   ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius ;

    printf("Area of the circle : %f\n  ", area );
    return 0;
}