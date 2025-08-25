#include <stdio.h>
int main()
{
	int n=5.35; //소수부 손실 
	double d=3; //값의 표현이 넓은 범위로의  변환 
	char c=129;
	printf("n:%d d:%f c=%d\n", n, d, c);
	
	return 0;
}
