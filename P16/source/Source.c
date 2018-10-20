#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double qwer(double a);
int main(void) {
	double i;
	for (i = 1; i <= 10;i++) {
		printf("%.2lf  ",qwer(i));
	}
	printf("\n");
	system("pause");
	return 0;
}
double qwer(double a) {
	return sqrt(a);
}