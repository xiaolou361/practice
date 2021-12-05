#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int str(char a[20], char b[20]) {
    int i, j, k;
    j = strlen(a);
    k = j - 1;
    for (i = 0; i < j; i++) {
        b[i] = a[k];
        k--;
    }
}
int main()
{
    char a[20],b[20];
    int i, l;
    scanf("%s", a);
    l = strlen(a);
    str(a, b);
    for (i = 0; i < l; i++) {
        printf("%c", b[i]);
    }
 
    return 0;
}