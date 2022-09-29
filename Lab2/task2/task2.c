#include<stdio.h>

int main()
{
	int n, i, j;
	int	k=0;
	printf("Input n>1\n");
	if((scanf_s("%d", &n)==1)&& n>1)
		
	{
		for (i = 1; i < n; i++)
		{
			j = 0;
			if (i * i * i + j * j * j == n)
				k++;
		}
		for (i = 1; i < n; i++)
		{
			j = 1;
			if (i * i * i + j * j * j == n)
				k++;
		}
		
		printf("k=%d", k);
		return 0;
	}
	
	else
	{
		printf("Wrong input");
		return 0;
	}
	
}

