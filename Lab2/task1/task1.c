#include<stdio.h>

int main()
{
	int a = 5;
	int n = 0;
	double sum = 0;
	for (int i = 1; sum <= a; i++)
	{
		n += 1;
		sum += (1.0 / n);
	}
	printf("n=%d", n);
	
	return 0;
}