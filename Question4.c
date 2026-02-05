//Write a c program to delete an element from a One-dimensional array at a specified index........
#include<stdio.h>
int main(){
    int arr[50], n, pos;
    printf("Enter number of element: ");
    scanf("%d", &n);
    printf("Enter array element :     ");
    for (int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter index to delete (0 - based index) :     ");
    scanf("%d", &pos);

    for (int i = pos; i < n-1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deleion :     \n");
    for (int i = 0 ; i < n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}