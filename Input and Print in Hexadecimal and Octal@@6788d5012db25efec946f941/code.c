#include <stdio.h>

int main() {
    int num;

    // Input a single integer
    scanf("%d", &num);

    // Output its hexadecimal and octal representations
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}
