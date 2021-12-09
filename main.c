#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);
    int i, j;
    char* p;
    i = strlen(a) - 1;
    j = strlen(a) / 2;
    for (p = a; p < a + j; p++, i--) {
        if (*p != a[i]) {
            printf("no");
            break;
        }
        else if (p == a + j - 1)
            printf("yes");
        else
            continue;
    }
}