#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count = 0, i;

    // Read a full line of input
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && !isspace(str[i])) || 
           (!isspace(str[i]) && isspace(str[i - 1]))) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
