#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float pr = 5000.0, rate = 0.1, i;
	for (i = 0; i < 5; i++)
	{
		printf("Now rate is  ");
		printf("%.1f%1s\n",rate*100,"%");
		printf("%4s%21s\n", "Year", "Ampunt on deposit");
		for (unsigned int year = 1; year <= 15; year++)
		{
			printf("%4u%21.2f\n", year, pr*pow(1.0 + rate, year));
		}
		rate = rate + 0.005;
		printf("\n");
	}
	return 0;
}