#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct addr {
	char name[20];
	int age;
} Addr;

void print_list(Addr*, int);

int main() {
	Addr list[3] = { {"고길동", 30}
				   , {"둘리", 9999999}
				   , {"도우너", 99999923} };
	Addr* p = list;

	int size = sizeof(list) / sizeof(list[0]);
	print_list(p, size);

	return 0;
}

void print_list(Addr* a, int size) {
	for (int i = 0; i < size; i++) {
		printf("%s - %d세\n", a[i].name, a[i].age);
	}
}