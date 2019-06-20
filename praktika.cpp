#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
	setlocale(LC_ALL,"rus");
	float *x, *y, *x1, *y1 ;
	float a1, a2, b;
	int  n;
	printf("Введите количество точек:  ");
	scanf("%d",&n);
	x = (float*)malloc(n * sizeof(float));
	y = (float*)malloc(n * sizeof(float));
	x1 = (float*)malloc(n * sizeof(float));
	y1 = (float*)malloc(n * sizeof(float));
	printf("Вводите координаты  точек:  \n");

	for (int i = 0; i < n; i++)
	{
		printf("x%d = ", i);
		scanf("%f", &x[i]);
		printf("y%d = ", i);
		scanf("%f", &y[i]);
	}
	printf("\n");
	
	printf("Введите угол (в градусах): ");
	scanf("%f", &b);
	printf("Вводите координаты  точки, относительно которой поворачиваем (точка Е):  \n");
	    printf("x=");
		scanf("%f", &a1);
		printf("y=");
		scanf("%f", &a2);

	printf("Приведем начало к точке Е:  \n");
	for (int i = 0; i < n; i++)
	{
		x[i]=x[i]-a1;
		y[i]=y[i]-a2;
		printf("%f:%f;\n", x[i], y[i]);
	}
	printf("\n");
	b=b*(3.14/180);
	printf("Новые кординаты: \n\n");
	for (int i = 0; i < n; i++)
	{
		x1[i]=((x[i]*cos(b))-(y[i]*sin(b)))+a1;
		y1[i]=((x[i]*sin(b))+(y[i]*cos(b)))+a2;
		printf("%f:%f;\n", x1[i], y1[i]);
	}
	free(x);
	free(y);
	return 0;
}
