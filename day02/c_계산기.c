#include <stdio.h>

float operator(int a, int b, char oper);

int main() {
	int num1;
	int num2;
	char oper;
	float result;
	while (1) {
		printf("�� ������ �Է��Ͻÿ�.\n");
		scanf_s("%d", &num1);
		scanf_s("%d", &num2);

		getchar();

		printf("�����ڸ� �Է��Ͻÿ�. ( + | - | x | / ) ... ����: Q \n");
		scanf_s("%c", &oper, sizeof(oper));
		
		if (oper == 'q' || oper == 'Q')break;

		printf("\n�Է��� ��: %d %c %d\n", num1, oper, num2);

		result = operator(num1, num2, oper);

		printf("��� : %.1f\n", result);
	}
	printf("�����մϴ�.");
	return 0;
}

float operator(int a, int b, char oper) {
	float result = 0;
	switch (oper)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case 'x': 
		result = a * b;
		break;
	case '/':
		result = (float)a / b;
		break;
	default:
		printf("�ٸ� ���� �Է���\n");
		break;
	}
	return result;
}
