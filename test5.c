#include <stdio.h>
int main(void)
{
	//���۰�, ���ᰪ �Է� 
	int sval, eval, rval;
	printf("���۰��� �Է��ϼ��� "); scanf("%d",&sval);
	printf("���ᰪ�� �Է��ϼ��� "); scanf("%d",&eval);
	
	rval=0;       //(�ʱⰪ, ��������, ��������) 
	int index=sval; 
	while(index>=sval&&index<=eval)     /*�������ǽ��� ��*/ 
	{
	}
	rval=rval+sval++; sval++;
	rval=rval+sval++; sval++;
	rval=rval+sval++; sval++;
	rval=rval+sval++; sval++;
	
	return 0; 
}
