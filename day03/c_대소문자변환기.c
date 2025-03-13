#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char ch;
	printf("대소문자 변환기를 시작합니다.\n");
	printf("영어 외 다른 것을 입력하면 종료합니다.\n");
	printf("-------------------------------------\n");
	while (1) {
		printf("영어를 입력하세요.\n");
		ch = getchar();
		getchar();

		if (ch >= 'A' && ch <= 'Z') {
			printf("대문자 %c를 입력하셨네요.\n", ch);

			//printf("변경: %c\n\n", ch + ' '/*32*/);
			printf("변경: ");
			putchar(ch + ' ');
			printf("\n\n");
		}
		else if (ch >= 'a' && ch <= 'z') {
			printf("소문자 %c를 입력하셨네요. \n", ch);

			//printf("변경: %c\n\n", ch - ' ');
			printf("변경: ");
			putchar(ch - ' ');
			printf("\n\n");
		}
		else { printf("종료"); break; }
	}


	return 0;
}