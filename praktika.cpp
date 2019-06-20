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
	printf("������� ���������� �����:  ");
	scanf("%d",&n);
	x = (float*)malloc(n * sizeof(float));
	y = (float*)malloc(n * sizeof(float));
	x1 = (float*)malloc(n * sizeof(float));
	y1 = (float*)malloc(n * sizeof(float));
	printf("������� ����������  �����:  \n");

	for (int i = 0; i < n; i++)
	{
		printf("x%d = ", i);
		scanf("%f", &x[i]);
		printf("y%d = ", i);
		scanf("%f", &y[i]);
	}
	printf("\n");
	
	printf("������� ���� (� ��������): ");
	scanf("%f", &b);
	printf("������� ����������  �����, ������������ ������� ������������ (����� �):  \n");
	    printf("x=");
		scanf("%f", &a1);
		printf("y=");
		scanf("%f", &a2);

	printf("�������� ������ � ����� �:  \n");
	for (int i = 0; i < n; i++)
	{
		x[i]=x[i]-a1;
		y[i]=y[i]-a2;
		printf("%f:%f;\n", x[i], y[i]);
	}
	printf("\n");
	b=b*(3.14/180);
	printf("����� ���������: \n\n");
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
