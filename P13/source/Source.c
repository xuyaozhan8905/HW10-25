#include<stdio.h>
#include<stdlib.h>
double x;
double qwer(int n);
int main() {
	int b;
	int z;
	double ans;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d",&z);
	ans = qwer(z);
	printf("3.5��%d����=%.6lf",z,ans);
	printf("\n");
	system("pause");
	return 0;
}
double qwer(int n) {
	int i;
	double c=1;
	for (i = 1; i <= n;i++) {
		c = c * 3.5;
	}
	return c;
}