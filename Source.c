#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>;

#include <stdlib.h>;

int main()
{
	int n = 0;
	long double min = 0.0;
	long double max = 0.0;
	int i = 0;


	printf("N=\t");
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
	double* ost;
	mas = (double*)malloc(n * sizeof(double));
	ost = (double*)malloc(n * sizeof(double));
	double sum = 0.0;
	for (i = 0; i < n; i++)
	{
		;
		mas[i] = (((double)rand()) / RAND_MAX) * (max - min) + min;
		ost[i] = (mas[i] - (int)mas[i]) * 1000;
		ost[i] = (int)ost[i];
		printf("mas[%d]=%lf  ost[%d]=%lf\n", i, mas[i], i, ost[i]);

		if (i != ost[i])
		{
			sum = sum + mas[i];
			printf("%lf\n", sum);
		}
	}
	
	return 0;
	 free(mas);

}
