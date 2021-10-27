#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hr, hw, ws, ap, wp, sa;
	int people,product;
	printf("input people type: ");
	scanf_s("%d", &people);
	switch (people)
	{
		case 1:
			printf("WP=");
			scanf_s("%f", &wp);
			printf("sa= ");
			printf("%.2f",wp);
			break;
		case 2:
			printf("HW=");
			scanf_s("%f", &hw);
			printf("HR=");
			scanf_s("%f", &hr);
			if (hr <= 40)
			{
				printf("sa= ");
				printf("%.2f", hr*hw);
			}
			if (hr > 40)
			{
				printf("sa= ");
				printf("%.2f", 40*hw+(hr-40)*1.5*hw);
			}
			break;
		case 3:
			printf("WS=");
			scanf_s("%f", &ws);
			printf("sa= ");
			printf("%.2f", 250+ws*0.057);
			break;
		case 4:
			printf("input product type: ");
			scanf_s("%d", &product);
			switch (product)
			{
				case 1:
					printf("input the amount of product: ");
					scanf_s("%f", &ap);
					printf("sa= ");
					printf("%.2f", 100 * ap);
					break;
				case 2:
					printf("input the amount of product: ");
					scanf_s("%f", &ap);
					printf("sa= ");
					printf("%.2f", 150 * ap);
					break;
				case 3:
					printf("input the amount of product: ");
					scanf_s("%f", &ap);
					printf("sa= ");
					printf("%.2f", 200 * ap);
					break;
			}
			break;
	}
	return 0;
}