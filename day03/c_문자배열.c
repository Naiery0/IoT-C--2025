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
//	str4[2] = '\0'; // 초기화를 하지 않았다면 null을 직접 삽입해야 함
//
//	printf("%s\n", str);
//	printf("%s\n", str2); // 비정상 출력... +1 만큼의 공간이 더 필요
//	printf("%s\n", str3);
//	printf("%s\n", str4);
//
//	printf("-----------------\n");
//	// 문자열 복사
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