//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	// �޸� ���� �Ҵ� malloc - free
//	int *pi = (void*)malloc(sizeof(int)); // �� ������ �Է� ũ�⸸ŭ �޸� ������ �Ҵ�, �����ּ� ����
//	if (pi == NULL) {
//		printf("�޸� �Ҵ� ����\n");
//		exit(1);
//	}
//	printf("�޸� �Ҵ� ����\n");
//
//	free(pi); 
//
//	char str[100];
//	gets(str);
//	void* ps = /*(*void)*/malloc(strlen(str) + 1);
//	int size = sizeof(ps);
//	strcpy(ps, str);
//	printf("heap: %s\n", (char*)ps);
//
//	free(ps);
//
//	return 0;
//}