#include <stdio.h>
int main(void)
{
	//시작값, 종료값 입력 
	int sval, eval, rval;
	printf("시작값을 입력하세요 "); scanf("%d",&sval);
	printf("종료값을 입력하세요 "); scanf("%d",&eval);
	
	rval=0;       //(초기값, 수행조건, 종료조건) 
	int index=sval; 
	while(index>=sval&&index<=eval)     /*수행조건식이 들어감*/ 
	{
	}
	rval=rval+sval++; sval++;
	rval=rval+sval++; sval++;
	rval=rval+sval++; sval++;
	rval=rval+sval++; sval++;
	
	return 0; 
}
