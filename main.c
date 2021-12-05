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
/*#include  "stdio.h"
double f(int n,double x){
    if (n==0)
        return 1;
    else
        return x*f(n-1,x);
}
int main()
{	int n;
    double x;
    scanf("%d%lf",&n,&x);
    printf("%.2lf",f(n,x));
    return 0;
}*/
