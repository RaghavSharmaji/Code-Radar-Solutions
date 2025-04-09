#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);  // Note the space before %c to consume any leftover newline
    printf("You entered: %c\n", ch);
    return 0;
}

