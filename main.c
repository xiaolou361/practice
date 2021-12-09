#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//}
//int main() {
//	int i = 0, j = 0;
//	for (;i<10;i++) {
//		for (; j < 10; j++) {  //当i=0，j=10时，j=10并未销毁
//			printf("hehehe\n");
//		}
//	
//	}
//}
//int main() {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y) {
//		printf("hehe\n");
//	}
//}
int main() {
	int i;
	for (i = 0; i = 0/*将0赋值给i，i为假*/; i++) {
		printf("haha\n");
	}
}