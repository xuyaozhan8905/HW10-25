#include<stdio.h>
#include<stdlib.h>

int main() {
	int i;
	for (i = 1; i <= 10;i++) {
		printf("%d  ",square(i));
	}
	printf("\n");
	system("pause");
	return 0;
}
int square(int a) {
	return a * a;
}