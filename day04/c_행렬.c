//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int students = 0;
//	printf("�л� ���� �Է��Ͻÿ�.\n");
//	scanf("%d", &students);
//	
//	int grape[][3] = { 0 };
//
//	for (int i = 0; i < students; i++) {
//		printf("\n%d ��° �л��� �������?", i+1);
//		scanf("%d", &grape[i][0]);
//		printf("\n%d ��° �л��� �������?", i+1);
//		scanf("%d", &grape[i][1]);
//		printf("\n%d ��° �л��� ���м�����?", i+1);
//		scanf("%d", &grape[i][2]);
//	}
//	int std_sum[] = { 0 }; // �л� ���
//	int obj_sum[3] = { 0 }; // ���� ���
//	for (int i = 0; i < students; i++) {
//		printf("\t ��: %d", grape[i][0]);
//		printf("\t ��: %d", std_sum[i]);
//		std_sum[i] += grape[i][0];
//		printf("\t %d", std_sum[i]);
//		std_sum[i] += grape[i][1];
//		printf("\t %d", std_sum[i]);
//		std_sum[i] += grape[i][2];
//		printf("\t %d", std_sum[i]);
//		printf("\t ��: %d", std_sum[i]);
//
//		for (int j = 0; j < 3; j++) {
//			obj_sum[j] += grape[i][j];
//		}
//	}
//	
//	for (int i = 0; i < students; i++) {
//		printf("\n%d ��° �л��� ���: %.2f", i + 1, std_sum[i] / 3.0);
//	}
//	printf("\n���� ���: %d", obj_sum[0] / (float)students);
//	printf("\n���� ���: %d", obj_sum[1] / (float)students);
//	printf("\n���� ���: %d", obj_sum[2] / (float)students);
//
//	return 0;
//}