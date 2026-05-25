#include <stdio.h>

int main(void) {
    char str[20];

    fgets(str, sizeof(str), stdin);

    printf("%s\n\n", str);
    return 0;
}
