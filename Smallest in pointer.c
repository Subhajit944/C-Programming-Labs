//
#include <stdio.h>

int main() {
    int arr[50], n, i, *ptr, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;  
    min = *ptr;

    for (i = 1; i < n; i++) {
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    printf("Smallest element = %d\n", min);
    return 0;
}