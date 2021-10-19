#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>;
#include <stdlib.h>;
int main()
{
	int n;
	double min;
	double max;
	int i = 0;


	printf("n=\t");
	scanf_s("%d", &n);

	if (n <= 0)
	{
		printf("error_n<=0");
			return 0;
	}

	printf("Min=\t");
	scanf_s("%lf", &min);

	printf("Max=\t");
	scanf_s("%lf", &max);

	if (min > max)
	{
		printf("error_MIN>MAX");
			return 0;
	}

	double* mas;
	mas = (double*)malloc(n * sizeof(double));


	for (i = 0; i < n; i++);
	{
		mas[i] = (((double)rand())/RAND_MAX) * (min-max)+min;
	}
	for (i = 0; i < n; i++)
		printf("mas[%d] = %lf\n", i);


	 free(mas);
		return 0;

}
