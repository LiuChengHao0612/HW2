#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int l, b, i, j;
	printf("l=");
	scanf_s("%d", &l);
	printf("b=");
	scanf_s("%d", &b);
	for (i = 0; i < b; i++)
	{
		printf("*");
	}
	printf("\n");
	for (i = 0; i < l-2; i++)
	{
		printf("*");
		for (j = 0; j < b-2 ; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (i = 0; i < b; i++)
	{
		printf("*");
	}
	return 0;
}