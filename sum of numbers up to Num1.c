#include <stdio.h>

main () {
	int Num1, Num2, sum, count;
	printf("Insert a number \n");
	count = 0;
	Num2 = 0;
	sum= 0;
	scanf("%d", &Num1);
	while (count < Num1) {
		Num2 = Num2 + 1;
		sum += Num2;
		count++;
	}
	printf("%d", sum);
	return 0;
}
