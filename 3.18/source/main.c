#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float i,j;

	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &i);
		if (i != -1)
		{
			printf("salary is(-1 to end):");
			j = 200 + i * 0.09;
			printf("%.2f\n", j);
		}
		else
		{
			break;
		}
		}
		return 0;
		}
	
