//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	char str[5][100];
//	void* ps[5];
//
//	for (int i = 0; i < 5; i++) {
//		fgets(str[i], sizeof(str[i]), stdin); // gets() ��� ������ fgets() ���
//		str[i][strcspn(str[i], "\n")] = '\0';
//		ps[i] = malloc(strlen(str[i]) + 1); // �޸� �Ҵ�
//
//		if (ps[i] == NULL) exit(1);  // ����ó�� 
//		
//		strcpy(ps[i], str[i]); // ����
//		printf("heap: %s\n", (char*)ps[i]); // ������ void�� �ؼ� ����ȯ �ؼ� ����ϴ� ����
//	}
//
//	for (int i = 0; i < 5; i++) free(ps[i]); // �޸� ��ȯ
//
//	return 0;
//}