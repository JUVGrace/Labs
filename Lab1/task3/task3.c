#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float a, b, c;
	printf("Input numbers\n");
	scanf_s("%f %f %f", &a, &b, &c);
	if (a == -b)
		printf("%f\n", c);
	else if (a == -c)
		printf("%f\n", b);
	else if (b == -c)
		printf("%f\n", a);
	else
		printf("Нет\n");

	return 0;
}