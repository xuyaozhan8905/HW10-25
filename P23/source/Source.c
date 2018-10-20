#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int qwer(void);
enum status {WIN,LOSE,CONTINUE};
int main(void) {
	for (;;) {
		int h;
		printf("Enter -1 to start");
		scanf_s("%d", &h);
		printf("\n");
		if (h == -1) {
			int sum;
			int my;
			enum status game;
			srand(time(NULL));
			sum = qwer();
			switch (sum) {
			case 7:
			case 11:
				game = WIN;
				break;
			case 2:
			case 3:
			case 12:
				game = LOSE;
				break;
			default:
				game = CONTINUE;
				my = sum;
				printf("Point is %d\n", my);
				break;
			}
			while (game == CONTINUE)
			{
				sum = qwer();
				if (sum == my) {
					game = WIN;
				}
				else if (sum == 7) {
					game = LOSE;
				}

			}
			if (game == WIN) {
				printf("Players is win\n");
				printf("\n");
			}
			else if (game == LOSE) {
				printf("Players is lose\n");
				printf("\n");

			}
		}
	}
	system("pause");
	return 0;
}

int qwer(void) {
	int a1, a2,a3;
	a1 = 1 + rand() % 6;
	a2 = 1 + rand() % 6;
	a3 = a1 + a2;
	printf("Player rolled %d + %d = %d\n",a1,a2,a3);
	return a3;
}