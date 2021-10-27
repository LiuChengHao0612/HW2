#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hw, hr;
	
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hw);
		if (hw != -1)
		{
			if (hw <= 40)
			{
				printf("Enter hourly rate of the worker ($00.00):");
				scanf_s("%f", &hr);
				printf("Salary is ");
				printf("%f\n", hw*hr);
			}
			if (hw > 40)
			{
				printf("Enter hourly rate of the worker ($00.00):");
				scanf_s("%f", &hr);
				printf("Salary is ");
				printf("%f\n", (hw - 40)*1.5*hr + hr * 40);
			}
		}
		else
		{
			break;
		}
		
	}return 0;
	
}