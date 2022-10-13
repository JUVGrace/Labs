#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int choice;
	int n;
	int array[100];
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
			while (scanf_s("%d", &array[i]) != 1)
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
			array[i] = rand() % 11;
			printf("%d\n", array[i]);
		}

	}
	else
	{
		printf("Wrong input");
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		if (array[i] % 2 == 0)
		{
			for (int j = i; j < n - 1; j++)
				array[j] = array[j + 1];
			i--;
			n--;
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d", array[i]);
	}

	return 0;
}
