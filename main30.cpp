#include <stdio.h>

int main(void) {
    char str[13] = "Hello world";   
    str[11] = ' ';   
    str[12] = '\0';  
    printf("%s\n", str);
    return 0;
}