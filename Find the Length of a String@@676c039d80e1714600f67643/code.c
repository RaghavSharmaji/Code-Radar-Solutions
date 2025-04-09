#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i = 0;

    // Read a full line of input
    scanf("%s", str);  // Use fgets(str, sizeof(str), stdin) if you want to include spaces

    // Manually calculate length
    while (str[i] != '\0') {
        length++;
        i++;
    }

    printf("%d\n", length);
    return 0;
}
