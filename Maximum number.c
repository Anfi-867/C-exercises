#include <stdio.h>

main () {
	int num, max;
	max = 0;
	printf("Insert 0 or a positive number \n");
	do {
		scanf("%d", &num);
		if (num > max) {
			max = num;
		}
		if (num < 0) {
			printf("Insert 0 or a positive number \n");
		}
	}
	while (num != 0);
	printf("The maximum is %d", max);
	return 0;
}
