////#define _CRT_SECURE_NO_WARNINGS
//#include <Windows.h>
//#include <stdio.h>
//void gugudan(int x);
//int main() {
//
//	int gugu = 0;
//
//	while (1) {
//		printf("1. 전체 구구단\n");
//		printf("2. 구구단 선택\n");
//		scanf_s("%d", &gugu, sizeof(gugu));
//		if (gugu == 1 || gugu == 2)
//			switch (gugu)
//			{
//			case 1:
//				gugudan(99);
//				break;
//			case 2:
//				printf("몇 단?\n");
//				scanf_s("%d", &gugu, sizeof(gugu));
//				gugudan(gugu);
//				break;
//			default:
//				break;
//			}
//		else {
//			printf("잘못된 입력입니다.\n");
//			getchar();
//		}
//	}
//}
//
//void gugudan(int x) {
//	if (x == 99) {
//		for (int i = 2; i < 10; i++) {
//			for (int j = 1; j < 10; j++) {
//				printf("%d x %d = %d\n", i, j, i * j);
//			}
//		}
//	}
//	else {
//		for (int i = 1; i < 10; i++) {
//			printf("%d x %d = %d\n", x, i, x * i);
//		}
//	}
//	return;
//}