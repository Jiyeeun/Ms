#include <stdio.h>
#include <conio.h>

int rectangle(int a, int b);
double triangle(int a, int b);

int main()
{
	int x,y;
	
	printf("(x,y)?:"); scanf("%d %d", &x, &y);
	
	int r=rectangle(x,y);
	double t=triangle(x,y);
	
	printf("�׺��� %d�̰� ���̰� %d�� 4������ ������ %d�Դϴ�.", x, y, r);
	printf("�׺��� %d�̰� ���̰� %d�� 3������ ������ %f�Դϴ�.", x, y, t);
	
	return 0;
}


int rectangle(int a, int b)
{
	int xy=a*b;     //return a*b
	return xy;		
}


double triangle(int a, int b)
{
	double xy=(double)a*(double)b/2.0;    
	return xy;
}	

