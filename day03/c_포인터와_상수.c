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
//	const int* pn2 = &num2;		// ������ ���
//	//*pn2 = 100; // �����͸� ���� ������ ���� ����
//	num2 = 0;  
//	printf("%d\n", num2);
//
//	int num3 = 40;
//	int* const pnum3 = &num3;	// ������ ���
//	*pnum3 = 100;
//	printf("%d\n", num3);
//	//pnum3 = &num2; // ������ ������ ����Ű�� �ּ��� ������ ����
//
//	const int* const pn5 = &num2; // �׳� ���� �Ұ�
//	//*pn5 = 1000;
//	//pn5 = &num3;
//
//	return 0;
//}