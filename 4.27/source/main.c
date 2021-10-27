#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k, x = 0;
	for (i = 1; i < 501; i++)
	{
		for (j = 1; j < 501; j++)
		{
			for (k = 1; k < 501; k++)
			{
				if (i*i == j*j+k*k)
				{
					printf("%d	%d	%d\n", k, j, i);
					x++;
				}	
			}
		}
	}
	printf("%d", x);
	return 0;
}