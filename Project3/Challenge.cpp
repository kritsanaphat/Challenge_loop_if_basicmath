#include<stdio.h>
#include<math.h>
int main() {
	int x, y, f, i, x1;
	float a = 0, sd = 0, av, sd1 = 0, sd2 = 0;
	scanf_s("%d %d", &x, &y);
	if (x > y) {
		x1 = x;
		f = (x - y) + 1;
		for (i = 0; i < f; i++) {
			a = a + x;
			av = a / f;
			sd = (x - av);
			printf("%d ", x);
			x--;
		}
		printf("%d", x1);
		printf("\nAverage = %.1f", av);
		for (i = 0; i < f; i++) {
			sd = (x1 - av) * (x1 - av);
			x1--;
			sd1 = sd1 + sd;
		}
		sd2 = sd1 / (f - 1);
		printf("\nSD = %.2f", sqrt(sd2));
	}
	else if (y > x) {
		x1 = x;
		f = (y - x) + 1;
		for (i = 0; i < f; i++) {
			a = a + x;
			av = a / f;
			printf("%d ", x);
			x++;
		}
		printf("\nAverage = %.1f", av);
		for (i = 0; i < f; i++) {
			sd = (x1 - av) * (x1 - av);
			x1++;
			sd1 = sd1 + sd;
		}
		sd2 = sd1 / (f - 1);
		printf("\nSD = %.2f", sqrt(sd2));
	}
}