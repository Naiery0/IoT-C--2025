#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char* myStrInput(char* str);
int main() {

	//char ch1;
	//char ch2 = ' ';

	//scanf("%c %c ", &ch1, &ch2); // 공백을 통한 입력버퍼 조정

	//printf("%c, %c\n", ch1, ch2);
	//
	//char ch;
	//ch = getchar(); // 한 문자를 읽어오는 함수
	//putchar(ch); // 한 문자를 출력하는 함수
	//putchar('\n');

	//printf("input : %c\n", ch);

	char str[100];
	char* p;

	p = myStrInput(str);
	printf("myStrInput: ");

	for (int i = 0; i < 99; i++) {
		putchar(p[i]);
		if (p[i] == '\n') { 
			printf("\n");
			break; 
		}
	}
	return 0;
}

char* myStrInput(char *str) {
	printf("문자열 입력. 엔터 시 종료\n");
	for (int i = 0; i < 99; i++) {
		str[i] = getchar();
		if (str[i]=='\n') break;
	}
	return str;
}