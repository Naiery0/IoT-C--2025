//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void swap(int a, int b);
//void pointerSwap(int* a, int* b);
//// int la = 10;
//// int lb = 20;
//
//int main() {
//    int a = 10;
//    int b = 20;
//    printf("변경 전 : a - %d | b - %d \n", a, b);
//    swap(a, b); // 스왑이 안 되죠? main함수의 지역변수이기 때문에 다른 함수에서 간섭 x
//    printf("변경 후 : a - %d | b - %d \n", a, b);
//    pointerSwap(&a, &b); // 포인터 활용 스왑 함수에 a와 b의 주소를 던져 줌
//    printf("다시 변경 후 : a - %d | b - %d \n", a, b);
//
//	return 0;
//}
//
//void swap(int a, int b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//void pointerSwap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}