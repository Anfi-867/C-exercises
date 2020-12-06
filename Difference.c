#include <stdio.h>


main () {
	int num1, num2, diff;
	diff = 0;
	printf("Insert 2 numbers: \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (num1 > num2) {
		do {
			num1 -= num2;
			diff = num1 - num2;
			printf("%d ", num1);
		}
		while (diff > 3);
	} else if (num1 < num2) {
		do {
			num2 -= num1;
			diff = num2 - num1;
			printf("%d ", num2);
		}
		while (diff > 3);
	} else {
		printf("The numbers are equal.");
	}
	return 0;
}
