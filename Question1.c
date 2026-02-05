//Write a C program  to declare and initilize a One-dimensional array and access its  elements using arrayindicets.........

#include<stdio.h>
int main(){
    int arr[5] = {10, 20,30,40,50};
    printf("Array element are : \n");

    for(int i=0; i<5; i++){
        printf("%d", arr[i]);
    }
    return 0;

}