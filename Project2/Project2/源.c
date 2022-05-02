#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int a;
	a = 2;
	int i, j, k;
	int cut = 0;
	i = a;
	while (i <= a + 3) {
		j = a;
		while (j <= a + 3) {
			k = a;
			while (k <= a + 3) {
				if (i != j && j != k && i != k) {
					cut++;
					printf("%d%d%d", i, j, k);
					if (cut == 6) {
						printf("\n");
						cut = 0;
					}
					else {
						printf(" ");

					}
				}
				k++;
			}
			j++;

		}
		i++;
	}
	return 0;
    }