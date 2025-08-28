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
	
	printf("및변이 %d이고 높이가 %d인 4각형의 면적은 %d입니다.", x, y, r);
	printf("및변이 %d이고 높이가 %d인 3각형의 면적은 %f입니다.", x, y, t);
	
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

