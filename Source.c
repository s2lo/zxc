#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>;
#include <stdlib.h>;

int main()
{
	int n,k = 0;
	long double min = 0.0;
	long double max = 0.0;
	int i = 0;


	printf("N=\t");
	scanf_s("%d", &n);

	printf("Min=\t");
	scanf_s("%lf", &min);

	printf("Max=\t");
	scanf_s("%lf", &max);

		if (n <= 0)
		{
			printf("error_n<=0");
			return 0;
		}


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
		
		mas[i] = (((double)rand()) / RAND_MAX) * (max - min) + min;
		ost[i] = (mas[i] - (int)mas[i]) * 1000000;
		ost[i] = (int)ost[i];
		printf("mas[%d]=%lf\n", i, mas[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (i == ost[k])
			{
				sum -= mas[k];
				mas[k] = 0.0;
			}
			
		}
		sum += mas[i];
	}

	printf("%lf", sum);
	free(mas);
	free(ost);
	return 0;


}
