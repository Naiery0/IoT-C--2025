//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	// 메모리 동적 할당 malloc - free
//	int *pi = (void*)malloc(sizeof(int)); // 힙 영역에 입력 크기만큼 메모리 공간을 할당, 시작주소 리턴
//	if (pi == NULL) {
//		printf("메모리 할당 실패\n");
//		exit(1);
//	}
//	printf("메모리 할당 성공\n");
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