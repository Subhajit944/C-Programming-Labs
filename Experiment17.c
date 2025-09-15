/* Write a program using switch case  to find the value of a cube , a sphere and a cuboid.For an incorrect choice , an appropoate error message should be displayed
a) Volume of a cube = s * s * s 
b) Volume of a Sphere = 4/3 * pi 8 r * r *r 
c) Volume of a cubed = 1 * b * h
*/

#include<stdio.h>
#include<math.h>

int main(){
    int choice;
    float side, radius , length, breadth, height, volume;

    printf("Volume calculation menu:       \n");
  
    printf("1. cube\n");
    printf("2. sphere\n");
    printf("3. cuboid\n");
    printf("Enter your choice(1 to 3) :       ");
    scanf("%d", &choice);

    switch(choice){

        case 1:
        printf("Enter side length of cube:      ");
        scanf("%f ", &side);
        volume=  side * side * side;

        printf("Area of cube = %2f\n", volume);
        break;

        case 2:
        printf("Enter radius of sphere:      ");
        scanf("%f", &radius);
        volume =  (4/3) * 3.14 * radius * radius * radius ;

        printf("volume of sphere = %2f\n", volume);
        break;

        case 3:
        printf("Enter lngth , breadth, height:      ");
        scanf("%f %f %f ", &length, &breadth, &height);
        volume= length * breadth * height;

        printf("volume of cuboid = %2f\n", volume);
        break;

        
        default:
        printf("Invalid choice! Please enter 1,2 or 3\n");
    }
}

