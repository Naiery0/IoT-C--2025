#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char ch;
	printf("��ҹ��� ��ȯ�⸦ �����մϴ�.\n");
	printf("���� �� �ٸ� ���� �Է��ϸ� �����մϴ�.\n");
	printf("-------------------------------------\n");
	while (1) {
		printf("��� �Է��ϼ���.\n");
		ch = getchar();
		getchar();

		if (ch >= 'A' && ch <= 'Z') {
			printf("�빮�� %c�� �Է��ϼ̳׿�.\n", ch);

			//printf("����: %c\n\n", ch + ' '/*32*/);
			printf("����: ");
			putchar(ch + ' ');
			printf("\n\n");
		}
		else if (ch >= 'a' && ch <= 'z') {
			printf("�ҹ��� %c�� �Է��ϼ̳׿�. \n", ch);

			//printf("����: %c\n\n", ch - ' ');
			printf("����: ");
			putchar(ch - ' ');
			printf("\n\n");
		}
		else { printf("����"); break; }
	}


	return 0;
}