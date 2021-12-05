#include  "stdio.h"
double fac(int n){
    double mul=1;
    for (int i=1;i <=n;i++)
        mul=mul*i;
    return mul;
}
double cmk(int m, int k){
    return fac(m)/fac(k)/fac(m-k);
}
int main()
{	int A,B;
    scanf("%d%d",&A,&B);
    printf("%.0lf",cmk(A,B));
     return 0;
}
