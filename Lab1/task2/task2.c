#include<stdio.h>

int main()

{
	float a, b;
	printf("Input number a\n");
	scanf_s("%f", &a);
	printf("Input number b\n");
	scanf_s("%f", &b);
	if (a == b)
		printf("a is equal to b\n");
	else
		printf("a is not equal to b\n");


	return 0;

}