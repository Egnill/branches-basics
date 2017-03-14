#include <stdio.h>

int main()
{
	int a;
	
	printf("Год вашего рождения?\n");
	scanf("%d", &a);
	
	printf("Вам столько лет: %d\n", (2017 - a));
	printf("AXAXAXXAXAXAXAXAXA!");
	
	return 0;
}