//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef struct vision {
//	double left;
//	double right;
//} Vision;
//
//Vision exchange(Vision v);
//
//int main() {
//	Vision rot;
//	printf("시력입력 >>");
//	scanf("%lf%lf", &rot.left, &rot.right);
//
//	rot = exchange(rot);
//	printf("바뀐 시력: %.1lf, %.1lf\n", rot.left, rot.right);
//
//	return 0;
//}
//
//Vision exchange(Vision v) {
//	Vision s;
//	s.left = v.left;
//	s.right = v.right;
//
//	return s;
//}