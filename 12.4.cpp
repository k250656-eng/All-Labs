#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 2; 
    int count = 0;
    int input;

    arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter integers (enter -1 to stop):\n");
    while(1) {
        scanf("%d", &input);
        if(input == -1) break;

        if(count == size) {
            size *= 2; 
            arr = (int *)realloc(arr, size * sizeof(int));
            if(arr == NULL) {
                printf("Memory reallocation failed.\n");
                return 1;
            }
        }
        arr[count++] = input;
    }

    printf("Array elements:\n");
    for(int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

