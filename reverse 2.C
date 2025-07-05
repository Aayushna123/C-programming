#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%99s", s);  // safe input

    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        char tmp = s[left];
        s[left++] = s[right];
        s[right--] = tmp;
    }

    printf("Reversed string: %s\n", s);
    return 0;
}

