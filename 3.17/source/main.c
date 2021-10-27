#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float an, bb, ch, cr, cl;
	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%f", &an);
		if (an != -1)
		{
			printf("Enter beginning balance:");
			scanf_s("%f", &bb);
			printf("Enter total charges:");
			scanf_s("%f", &ch);
			printf("Enter total credits:");
			scanf_s("%f", &cr);
			printf("Enter credit limit:");
			scanf_s("%f", &cl);
			printf("Account:");
			printf("%f", an);
			printf("\n");
			printf("Credit limit: ");
			printf("%f", cl);
			printf("\n");
			printf("Balance: ");
			printf("%f", bb + ch + -cr);
			printf("\n");
			if (bb + ch - cr > cl)
			{
				printf("Credit Limit Exceeded.");
				printf("\n");
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}

