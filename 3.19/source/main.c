#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float pr, ir, lo;
	printf("Enter loan principal (-1 to end):");
	scanf_s("%f", &pr);
	while (1)
	{
		if (pr != -1)
		{
			printf("Enter interest rate: ");
			scanf_s("%f", &ir);
			printf("Enter term of the loan in days:");
			scanf_s("%f", &lo);
			printf("The interest charge is $ ");
			printf("%.2f\n", (pr*ir*lo)/365);
		}
		else
		{
			break;
		}
	}
	return 0;
}