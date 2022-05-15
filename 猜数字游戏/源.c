#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int number, n;
	int inp;
	int finished = 0;
	int cnt = 0;
	scanf("%d %d", &number, &n);
	do {
		printf("请输入要猜的数");
		scanf("%d", &inp);
		cnt++;
		if (inp < 0) {
			printf("Game Over\n");
			finished = 1;

		}
		else if (inp > number) {
			printf("Too big\n");
		}
		else if (inp < number) {
			printf("Too small\n");
		}
		else {
			if (cnt == 1) {
				printf("bingo！\n");
			}
			else if (cnt <= 3) {
				printf("good lucky\n");
			}
			else {
				printf("good guess\n");

			}
			finished = 1;
		}

		if (cnt == n) {
			if (!finished) {
				printf("Game Over\n");
				finished = 1;
			}
		}
	} while (!finished);
 
	return 0;
}