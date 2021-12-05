#include <stdio.h>
#include <math.h>
double avernum(double a[], int n) {
    int i;
    double sum = 0, aver, m = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    aver = sum / n;
    int x ;
    for (x = 0; x < n; x++) 
        if (a[x] > aver)
            m=m+1;//m为大于平均值的个数
    
    a[100] = m;//返回第二个值
    return aver;
}
int main() {
    double a[101], we;
    int i;
    for (i = 0; i < 100; i++) {
        a[i] = 200 * cos(i * 0.875);
    }
    we = avernum(a, 100);
 
    printf("aver=%f\n", we);
    printf("m=%f\n", a[100]);

}
