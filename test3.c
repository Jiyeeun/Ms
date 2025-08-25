#include <stdio.h>
int main()
{
	int x,y;
	int A,O,X,N;
	
	printf("x y  A O X N\n");
	printf("===========\n");
	
	x=1,y=1; 
	printf("%d %d  %d %d %d %d\n",x,y,A=x&&y,O=x||y,X=x^y,N=!(x||y));   //비트단위-> &,|,~ 
	x=1,y=0;                                                             //논리단위-> &&,||,! 
	printf("%d %d  %d %d %d %d\n",x,y,A=x&&y,O=x||y,X=x^y,N=!(x||y));
	x=0,y=1;
	printf("%d %d  %d %d %d %d\n",x,y,A=x&&y,O=x||y,X=x^y,N=!(x||y));
	x=0,y=0;
	printf("%d %d  %d %d %d %d\n",x,y,A=x&&y,O=x||y,X=x^y,N=!(x||y));
	return 0;
		
	
/*	x  y  A  O  X(xor)  N(nor)
1 1  1 1 0 0
1 0  0 1 1 0
0 1  0 1 1 0
0 0  0 0 0 1*/


}
