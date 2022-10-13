#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int choice;
	int n;
	int A[100];
	printf("Input the length of the array\n");
	while (scanf_s("%d", &n) != 1 || n < 1 || n>100 || getchar() != '\n')
	{
		printf("Wrong input\n");
		rewind(stdin);
	}


	printf("Enter 1 if you want keyboard input or 2 if you want random input\n");
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		printf("Input %d elements\n", n);
		for (int i = 0; i < n; i++)
		{
			while (scanf_s("%d", &A[i]) != 1 || A[i] == 0 )
			{
				printf("Wrong input\n");
				rewind(stdin);
			}
		}


	}
	else if (choice == 2)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			A[i] = rand() % 30-15;
			if (A[i]==0)
			{
				i--;
			}
			else
				printf("%d\n", A[i]);
		}

	}
	else
	{
		printf("Wrong input");
		return 0;
	}

	int temp;

	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (A[i] < A[i + 1])
			{
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}

		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%3d", A[i]);
	}

	return 0;
}