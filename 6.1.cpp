#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
    char ans;

    do {
        printf("Enter number: ");
        scanf("%d", &n);

        if (n % 2 == 0) {
            printf("even number\n");
            even++;
        } else {
            printf("odd number\n");
            odd++;
        }

        printf("Do you want to continue? (y for yes / n for no): ");
        scanf(" %c", &ans);   

    } while (ans== 'y');   

    printf("you entered %d even numbers\n", even);
    printf("you entered %d odd numbers\n", odd);

    return 0;
}


