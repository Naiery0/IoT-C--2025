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
//		fgets(str[i], sizeof(str[i]), stdin); // gets() 대신 안전한 fgets() 사용
//		str[i][strcspn(str[i], "\n")] = '\0';
//		ps[i] = malloc(strlen(str[i]) + 1); // 메모리 할당
//
//		if (ps[i] == NULL) exit(1);  // 예외처리 
//		
//		strcpy(ps[i], str[i]); // 복붙
//		printf("heap: %s\n", (char*)ps[i]); // 선언을 void로 해서 형변환 해서 출력하는 거임
//	}
//
//	for (int i = 0; i < 5; i++) free(ps[i]); // 메모리 반환
//
//	return 0;
//}