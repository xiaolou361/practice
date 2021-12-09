#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int i, s = 1,n, sum = 0;
//	for (n = 1; n <= 3; n++) {
//
//		for (i = 1; i <= n; i++) {
//			s *= i;
//		}
//			sum += s;
//			s = 1;
//	}
//	printf("%d", sum);
//}
int main() {
	int  s = 1, n, sum = 0;
	for (n = 1; n <= 3; n++) {
        s *= n;
		sum += s;
	}
	printf("%d", sum);
}