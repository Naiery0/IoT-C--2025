#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n = 0;
	printf("정수를 입력하세요...");
	scanf("%d", &n);
	printf("\n입력한 정수 : %d\n", n);

	int n1, n2;
	printf("두 개의 정수를 입력하세요...");
	scanf("%d %d", &n1, &n2);
	printf("입력한 정수 1 : %d \n입력한 정수 2 : %d\n\n", n1, n2);

	char str[20];
	printf("문자열을 입력하세요 : \n");
	scanf_s("%s", str, sizeof(str)); // scanf_s( , ,sizeof())는 오버플로우 방지
	printf("입력한 문자열 : %s\n", str);

	return 0;
}