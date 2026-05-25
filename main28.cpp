#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    
    setlocale(LC_ALL, "");

    wchar_t *str1 = L"hello";
    wchar_t *str2 = L"안녕";
    wchar_t *str3 = L"안녕은 hello";

    wprintf(L"Length of 'hello' : %d\n", wcslen(str1));
    wprintf(L"Length of '안녕' : %d\n\n", wcslen(str2));
    wprintf(L"Length of '안녕은 hello' : %d\n\n", wcslen(str3));

    return 0;
}             