#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n = 100;
	int* pn;
	int** ppn;

	pn = &n;
	ppn = &pn;

	return 0;
}