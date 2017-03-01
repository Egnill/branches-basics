#include <stdio.h>

int main()
{
	int a;
	
	printf("Год вашего рождения?\n");
	scanf("%d", &a);
	
	printf("Вам столько лет: %d", (2017 - a));
	
	return 0;
}