// Write a C program to traverse an array using loop contructs (for and while) and modify the element of the array.........
#include<stdio.h>
int main(){
    int n, arr[50];
    printf("%d", &n);
    printf("Enter element :    \n");
    int i = 0;
    while(i<n){
        scanf("%d", &arr[i]);
        i++;
    }
    for(int i = 0; i < n; i++){
        printf("Your element id :  %d\n", arr[i]);
    }
    return 0;
}