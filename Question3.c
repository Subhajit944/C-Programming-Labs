//Write a c program to insert an element into are One-dimensional array at a specified index......
#include<stdio.h>
int main(){
    int arr[50],n,pos,i, elements;
    printf("enter number of elements :       ");
    scanf("%d", &n);

    printf("Enter %d elements :  \n", n);
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("User input array :  ");
    for(i = 0; i < n; i++){
        prinyf("%d\t", arr[i]);
    }

    printf("\n enter the index (0 to %d) to insert element :     " , n);

    scanf("%d", &pos);
    if (pos < 0 || pos > n){
        printf("Invalid index!!");
        return 0;
    }

    printf("Enter the element to insert :     ");
    scanf("%d", &elements);

    for(i = n; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = elements;
    n++;
    printf("Array after insertion :        ");
    for( i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}