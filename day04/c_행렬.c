//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int students = 0;
//	printf("학생 수를 입력하시오.\n");
//	scanf("%d", &students);
//	
//	int grape[][3] = { 0 };
//
//	for (int i = 0; i < students; i++) {
//		printf("\n%d 번째 학생의 국어성적은?", i+1);
//		scanf("%d", &grape[i][0]);
//		printf("\n%d 번째 학생의 영어성적은?", i+1);
//		scanf("%d", &grape[i][1]);
//		printf("\n%d 번째 학생의 수학성적은?", i+1);
//		scanf("%d", &grape[i][2]);
//	}
//	int std_sum[] = { 0 }; // 학생 평균
//	int obj_sum[3] = { 0 }; // 과목 평균
//	for (int i = 0; i < students; i++) {
//		printf("\t 점: %d", grape[i][0]);
//		printf("\t 평: %d", std_sum[i]);
//		std_sum[i] += grape[i][0];
//		printf("\t %d", std_sum[i]);
//		std_sum[i] += grape[i][1];
//		printf("\t %d", std_sum[i]);
//		std_sum[i] += grape[i][2];
//		printf("\t %d", std_sum[i]);
//		printf("\t 평: %d", std_sum[i]);
//
//		for (int j = 0; j < 3; j++) {
//			obj_sum[j] += grape[i][j];
//		}
//	}
//	
//	for (int i = 0; i < students; i++) {
//		printf("\n%d 번째 학생의 평균: %.2f", i + 1, std_sum[i] / 3.0);
//	}
//	printf("\n국어 평균: %d", obj_sum[0] / (float)students);
//	printf("\n영어 평균: %d", obj_sum[1] / (float)students);
//	printf("\n수학 평균: %d", obj_sum[2] / (float)students);
//
//	return 0;
//}