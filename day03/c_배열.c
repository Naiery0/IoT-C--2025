//#include <stdio.h>
//void printary(int ary[], int size);
//
//int main() {
//
//	int ary[5] = { 1, 2, 3, 4, 5 };
//	int ary2[] = { 6, 7, 8, 9, 10 };
//	int ary3[5];
//	//int ary4[];
//	printary(ary, sizeof(ary));
//	ary[2] = 100;
//	printary(ary, sizeof(ary));
//
//
//	return 0;
//}
//
//void printary(int ary[], int size) {
//	printf("�迭 ���� ��: %d ��\n", size / sizeof(int));
//	printf("�迭 ù��° �� �ּ�: %p\n", &ary[0]);
//	printf("�迭�� ũ��: %d byte\n\n", size);
//	for (int i = 0; i < 5; i++) {
//		printf("ary[%d] = %d\n", i, ary[i]);
//		//printf("ary[%d] = %d\t", i, ary2[i]);
//		//printf("ary[%d] = %d\n", i, ary3[i]);
//		printf("----------------------------------------------------------\n");
//	}
//}