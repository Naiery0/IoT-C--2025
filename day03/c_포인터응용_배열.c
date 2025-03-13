//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void printAry(int* ary, int size);
//void inputAry(int* ary, int size);
//
//int main() {
//
//	int ary[5] = { 0, 1, 2, 3, 4 };
//	int* pa = ary; // 배열의 이름 = 배열의 시작주소이므로,
//
//	*pa = 10;
//	printf("*pa = %d || ary[0] = %d\n", *pa, ary[0]/* *ary */);
//	
//	printf("*(pa + 1): %d\n", *(pa + 1));
//	printf("pa[0]: %d\n", pa[0]);
//	printf("pa[1]: %d\n", pa[1]);
//	
//
//	printf("*(ary + 1): %d\n", *(ary + 1));
//
//	int ary2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	
//	printAry(ary2, sizeof(ary2));
//
//	int inAry[5] = { 0 };
//	inputAry(inAry, sizeof(inAry));
//	printAry(inAry, sizeof(inAry));
//
//	return 0;
//}
//
//void printAry(int* ary, int size) {
//	for (int i = 0; i < size / sizeof(int); i++) {
//		printf("함수 출력 ary[%d] : %d\n", i, *(ary + i));
//	}
//}
//
//void inputAry(int* ary, int size) {
//	for (int i = 0; i < size / sizeof(int); i++) {
//		printf("%d 중, %d 번째 인덱스 입력", size / sizeof(int), i);
//		scanf("%d", ary + i);
//		printf("\n");
//	}
//	printf("입력 완료\n\n");
//}