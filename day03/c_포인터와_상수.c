//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num = 11111;
//	int num2 = 10;
//	num2 = 20;
//	int* pnum2 = &num2;
//	*pnum2 = 30;
//	printf("%d\n", num2);
//
//	const int* pn2 = &num2;		// 데이터 상수
//	//*pn2 = 100; // 포인터를 통한 데이터 변경 불허
//	num2 = 0;  
//	printf("%d\n", num2);
//
//	int num3 = 40;
//	int* const pnum3 = &num3;	// 포인터 상수
//	*pnum3 = 100;
//	printf("%d\n", num3);
//	//pnum3 = &num2; // 포인터 변수가 가리키는 주소의 변경을 불허
//
//	const int* const pn5 = &num2; // 그냥 변경 불가
//	//*pn5 = 1000;
//	//pn5 = &num3;
//
//	return 0;
//}