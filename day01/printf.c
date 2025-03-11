#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main() {
	printf("-----����-----\n");
	printf("���� ��� %d\n", 10);
	printf("���� ��� %d\n", 0xc); // 0x�� 16����
	printf("�Ǽ� ��� %f\n", 0.1); 
	printf("�Ǽ� ��� %.2f\n", 3.141592);
	printf("\n\n");

	printf("-----����-----\n");
	printf("%c\n", 'a');
	printf("%s\n", "abc"); // ���ڴ� ' ', ���ڿ��� " "
	printf("\n\n");

	printf("-----����-----\n");
	int num = 10; // ���� ���� & �ʱ�ȭ
	printf("num = %d\n", num);

	char ch = 'A'; // ���� Ÿ�� ����
	printf("ch = %c\n", ch);
	printf("\n\n");
	
	float f = 1.123456789;
	double d = 1.123456789;
	printf("f = %.10f\n", f);  
	printf("d = %.10lf\n", d);
	printf("\n\n");

	char str[10] = "banana"; // ����Ÿ�� �迭
	printf("str = %s\n", str);
	printf("str[0] = %c\n", str[0]);
	printf("str[6] ���� = %c\n", str[6]);
	printf("str[6] ���ڿ� = %s\n", str[6]); // ���ڿ� ������ (null)���ڿ� �� ����
	printf("\n\n");

	char str2[6] = "apple"; // (null)�� �� �� �ִ� ������ �ڸ� ����
	printf("str2 = %s\n", str2);
	
	str2[0] = 'A';
	printf("str2 = %s\n", str2);
	printf("\n\n");

	printf("-----�迭-----\n");
	int ary[5] = { 1, 2, 3, 4, 5 }; // ������ �迭
	printf("ary[0] = %d\n", ary[0]);

	for (int i = 0; i < 5; i++) {
		printf("ary[%d] = %d\n", i, ary[i]);
	}

	printf("\n\n");

	printf("-----���-----\n");
	int r = 10;
	const double pi = 3.14; // const : ���
	double cf = 2 * pi * r;
	printf("���ѷ� : %lf\n", cf);

	// pi = 15; error
	// �����ͷ� �ٲ� �� ����
	double* dp = &pi;
	*dp = 4.0;
	
	printf("Change pi : %lf\n", pi);
	

	return 0;
}