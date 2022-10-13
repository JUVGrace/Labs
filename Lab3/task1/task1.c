#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int choice;
	int n;
	float array[100];
	printf("Input the length of the array\n");
	while(scanf_s("%d", &n)!=1||n<1||n>100)
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
			while (scanf_s("%f", &array[i]) != 1)
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
			(float) array[i] = rand() % 10 - 5;
			printf("%lf\n", array[i]);
		}

	}
	else
	{
		printf("Wrong input");
		return 0;
	}

	float sum = 0.0;

	for (int i = 0; i < n; i++)
	{
		if (array[i] < 0)
			sum += array[i];
	}

	float max = array[0];
	float min = array[0];
	int mx=1, mn=1;

	for (int i = 0; i < n; i++)
	{
		if (array[i] >= max)
		{
			max = array[i];
			mx = i;
		}
		if (array[i] <= min)
		{
			min = array[i];
			mn = i;
		}

	}
	float mult = 1;
	if (mn > mx)
	{
		for (int i = mx+1; i < mn; i++)
		{
			mult *= array[i];
		}
	}
	else if (mn < mx)
	{
		for (int i = mn + 1; i < mx; i++)
		{
			mult *= array[i];
		}
	}
	printf("mult=%.2lf sum=%.2lf", mult, sum);
	
	return 0;
}