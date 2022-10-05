#include<stdio.h> 

int main()

{
	int P, Q, div, i;
	printf("Input P and Q:\n");
	if (scanf_s("%d%d", &P, &Q) == 2)
	{
		if (P == 0 || Q == 0)
		{
			printf("Wrong input");
			return 0;
		}

		for (i = 1; i <= P; i++)
		{
			if (P % i == 0 && Q % i == 0)
			{
				div = i;
			}

		}
		if (div == 1)
		{
			printf("%d and %d are CO-PRIME NUMBERS.", P, Q);
		}
		else 
		{ 
			printf("%d and %d are NOT CO-PRIME NUMBERS.", P, Q); 
		}     
		return 0;
	}
	else
	{
		printf("Wrong input");
		return 0;

	}
}