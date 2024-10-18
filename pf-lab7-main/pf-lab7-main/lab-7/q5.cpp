#include <stdio.h>

int main() {
    int arr[20];
    int i;
    printf("Enter 20 numbers:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Numbers in reverse order are:\n");
    for (i = 19; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}