#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n = 0;
	printf("������ �Է��ϼ���...");
	scanf("%d", &n);
	printf("\n�Է��� ���� : %d\n", n);

	int n1, n2;
	printf("�� ���� ������ �Է��ϼ���...");
	scanf("%d %d", &n1, &n2);
	printf("�Է��� ���� 1 : %d \n�Է��� ���� 2 : %d\n\n", n1, n2);

	char str[20];
	printf("���ڿ��� �Է��ϼ��� : \n");
	scanf_s("%s", str, sizeof(str)); // scanf_s( , ,sizeof())�� �����÷ο� ����
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}