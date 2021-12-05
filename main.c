#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double sqr(int x, int n) {
    int i,s=1;
    for (i = n; i >0; i--) {
        if (n != 1)
            s *= x;
        else
            return 1;
    }
    return s;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.2f\n",sqr(b,a));
    return 0;
}