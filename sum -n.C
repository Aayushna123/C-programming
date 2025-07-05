#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int count = 1; count <= n; ++count) {
        sum += count;
    }

    printf("Sum = %d\n", sum);
    return 0;
}

