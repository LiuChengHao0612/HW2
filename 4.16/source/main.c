#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float i, j;
	printf("%s", "(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	printf("%s", "(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("%s", "(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", " ");
		}
		for (j = 10; j > i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("%s", "(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 9; j > i; j--)
		{
			printf("%s"," ");
		}
		for (j = 0; j <=i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	return 0;
}