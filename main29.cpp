#include <stdio.h>
#include <string.h>

int main(void) {
    const char *str1 = "abcde";

    printf("1st str: %s \n", str1);
    str1 = "hello";
    printf("2nd str: %s \n", str1);

    return 0;
}