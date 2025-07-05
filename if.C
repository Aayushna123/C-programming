#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("%d is negative\n", num);
    }
    return 0;
}

