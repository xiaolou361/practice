#include <stdio.h>
//int main()
//{
//	int i, isprime, k = 0;
//	int a[100],j;
//	for (i = 2; i <= 100; i++) {
//		isprime = 1;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				isprime = 0;
//				break;
//			}
//		}
//		if (1 == isprime) {
//			a[k] = i;
//			printf("%d  ", a[k]);
//			k++;
//		}
//	}
//}

//解法二：
int prime(int x) {
	int a;
	for (a = 2; a * a <= x; a++) {
		if (x % a == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i, a[100], k=0;
	for (i = 2; i <= 100; i++) 
		if (prime(i)){ //花括号位置
			a[k] = i;
			k++;
		}
	for(i = 0;i < k;i++){
		printf("%d  ", a[i]);
	}
}