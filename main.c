#include <stdio.h>
//int main()
//{
//	int i, isprime, j;
//	int a[200], k = 0;
//	for (i = 2; i <= 200; i++) {
//		isprime = 1;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				isprime = 0;
//				break;
//			}
//		}
//		if (isprime == 1) {
//			a[k] = i;
//			printf("%d  ", a[k]);
//			k++;
//		}
//	}
//	return 0;
//}
//int prime(int n) {
//	int i;
//	for (i = 2; i * i <= n; i++) {
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main() {
//	int a[100], i, k=0;
//	for (i = 2; i <= 100; i++) 
//		if (prime(i)) {
//			a[k] = i;
//			k++;
//		}
//	for (i = 0; i < k; i++) {
//		printf("%d  ", a[i]);
//	}
//	return 0;
//	       /*k     i
//		     0     2
//			 1     3
//			 2     5
//			 3     7
//			 4...*/
//
//}