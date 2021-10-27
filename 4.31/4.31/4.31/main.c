#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		for (j =5; j > i-1; j--)
		{
			printf(" ");
		}
		for (j = 0; j <2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j<i+2; j++)
		{
			printf(" ");
		}
		for (j = 6; j>2*i-1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}