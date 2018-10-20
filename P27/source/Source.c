#include<stdio.h>
#include<stdlib.h>

long int qwer(long int a);
int main() {
	int i;
	for (i = 0; i <= 10;i++ ) {
		printf("%2d! = %1d\n",i,qwer(i));
	}
	system("pause");
	return 0;
}
long int qwer(long int a) {
	long int b ;
	if (a > 1) {
		b = a * qwer(a - 1);
		return b;
	}
	else {
		return 1;
	}
}
