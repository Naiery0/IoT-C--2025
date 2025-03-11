#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main() {
	printf("-----숫자-----\n");
	printf("정수 출력 %d\n", 10);
	printf("정수 출력 %d\n", 0xc); // 0x는 16진수
	printf("실수 출력 %f\n", 0.1); 
	printf("실수 출력 %.2f\n", 3.141592);
	printf("\n\n");

	printf("-----문자-----\n");
	printf("%c\n", 'a');
	printf("%s\n", "abc"); // 문자는 ' ', 문자열은 " "
	printf("\n\n");

	printf("-----변수-----\n");
	int num = 10; // 변수 선언 & 초기화
	printf("num = %d\n", num);

	char ch = 'A'; // 문자 타입 변수
	printf("ch = %c\n", ch);
	printf("\n\n");
	
	float f = 1.123456789;
	double d = 1.123456789;
	printf("f = %.10f\n", f);  
	printf("d = %.10lf\n", d);
	printf("\n\n");

	char str[10] = "banana"; // 문자타입 배열
	printf("str = %s\n", str);
	printf("str[0] = %c\n", str[0]);
	printf("str[6] 문자 = %c\n", str[6]);
	printf("str[6] 문자열 = %s\n", str[6]); // 문자열 끝에는 (null)문자열 이 들어간다
	printf("\n\n");

	char str2[6] = "apple"; // (null)이 들어갈 수 있는 마지막 자리 마련
	printf("str2 = %s\n", str2);
	
	str2[0] = 'A';
	printf("str2 = %s\n", str2);
	printf("\n\n");

	printf("-----배열-----\n");
	int ary[5] = { 1, 2, 3, 4, 5 }; // 정수형 배열
	printf("ary[0] = %d\n", ary[0]);

	for (int i = 0; i < 5; i++) {
		printf("ary[%d] = %d\n", i, ary[i]);
	}

	printf("\n\n");

	printf("-----상수-----\n");
	int r = 10;
	const double pi = 3.14; // const : 상수
	double cf = 2 * pi * r;
	printf("원둘레 : %lf\n", cf);

	// pi = 15; error
	// 포인터로 바꿀 수 있음
	double* dp = &pi;
	*dp = 4.0;
	
	printf("Change pi : %lf\n", pi);
	

	return 0;
}