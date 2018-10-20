#include<stdio.h>
#include<stdlib.h>
int max1(int x,int y,int z);

int main() {
	int a, b, c;
	printf("Eneter three integers¡G");
	scanf_s("%d %d %d",&a,&b,&c);
	printf("Maximum is  %d\n",max1(a,b,c));
	system("pause");
	return 0;
}
int max1(int x,int y,int z) {
	int ui=x;
	if (y > ui) ui = y;
	if (z > ui) ui = z;
	return ui;
}