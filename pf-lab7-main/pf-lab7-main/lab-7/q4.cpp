#include <stdio.h>

int main() {
    int arr[15];  
    int sum = 0;  
    int i;

    printf("Enter 15 numbers:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < 15; i++) {
        sum += arr[i];
    }
    
    printf("Sum of the elements is: %d\n", sum);

    return 0;
}