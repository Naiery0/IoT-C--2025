//#include <stdio.h>
//
//int main() {
//
//	char str[100] = "banana";
//	char str2[6] = "banano";
//	char str3[10] = { 'o', 'r', 'a', 'n', 'g', 'e' };
//	char str4[3];
//	str4[0] = 'a';
//	str4[1] = 'c';
//	str4[2] = '\0'; // �ʱ�ȭ�� ���� �ʾҴٸ� null�� ���� �����ؾ� ��
//
//	printf("%s\n", str);
//	printf("%s\n", str2); // ������ ���... +1 ��ŭ�� ������ �� �ʿ�
//	printf("%s\n", str3);
//	printf("%s\n", str4);
//
//	printf("-----------------\n");
//	// ���ڿ� ����
//	// str = str3; -> error
//	strcpy(str, str3);
//	printf("%s \n", str);
//
//	strcpy(str, "banana");
//	printf("%s \n", str);
//
//	str[0] = 'B';
//	printf("%s \n", str);
//	return 0;
//}