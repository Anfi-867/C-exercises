#include <stdio.h>

main () {
	int a, b, c;
	printf("Insert 3 numbers \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a >= b && a >= c) {
		if (b >= c) {
			printf("%d, %d, %d", a, b, c);
		} else if (b < c) {
			printf("%d, %d, %d", a, c, b);
		}
	}
	if (b > a && b >= c) {
		if (a >= c) {
			printf("%d, %d, %d", b, a, c);
		} else if (a < c) {
			printf("%d, %d, %d", b, c, a);
		}
	}
	if (c > a && c > b) {
		if (a >= b) {
			printf("%d, %d, %d", c, a, b);
		} else if (a < b) {
			printf("%d, %d, %d", c, b, a);
		}
	}
}
