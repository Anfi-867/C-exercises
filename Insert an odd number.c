#include <stdio.h>

main () {
	int Num, Nums, rest;
	printf("Insert an odd number \n");
	Nums = -1;
	rest = 0;
	do {
		scanf("%d", &Num);
		rest = Num % 2;
		Nums++;
	}
	while (rest == 0);
	printf("You insert %d even numbers.", Nums);
	return 0;
}
