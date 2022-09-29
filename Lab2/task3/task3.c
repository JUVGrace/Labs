#include<stdio.h>

int main()
{
	int P, Q;
	printf("Input P and Q\n");
	if (scanf_s("%d %d", &P, &Q) == 2)
	{
		

		if (P != 1 && Q != 1)
		{
			if (P % Q == 0 || Q % P == 0)
			{
				printf("%d and %d - not coprime numbers\n", P, Q);
				return 0;
			}
			if (P == 0 && Q != 0 || P != 0 && Q == 0)
			{
				printf("%d and %d - not coprime numbers\n", P, Q);
				return 0;
			}
			if (P % Q != 0 || Q % P != 0)
			{
				printf("%d and %d - Coprime numbers\n", P, Q);
				return 0;
			}
			
		}


		if (P == 1 || Q == 1)
		{
			if (P == 1 && Q == 1)
			{
				printf("%d and %d - Coprime numbers\n", P, Q);
				return 0;
			}
			if (P == 1 && Q != 0 || P != 0 && Q == 1)
			{
				printf("%d and %d - Coprime numbers\n", P, Q);
				return 0;
			}
			if (P == 1 && Q == 0 || P == 0 && Q == 1)
			{
				printf("%d and %d - not coprime numbers\n", P, Q);
				return 0;
			}
		}
		
	}
	else
		printf("Wrong Input\n");
	
	return 0;
}
