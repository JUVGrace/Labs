#include <stdio.h>
int main()
{
	float r;
	double s, v;
	printf("Input r \n");
	scanf_s("%f", &r);
	s = 4 * 3.14 * r * r;
	v = (double)4 / 3 * 3.14 * r * r * r;
	printf("s=%.2f\nv=%.2f\n", s, v);
	return 0;
}