#include <stdio.h>

int main(void)
{
	int index, val=0, end;
	
	printf("�ε��� ���۰���?"); scanf("%d", &index);
	printf("�ε��� ���ᰪ��?"); scanf("%d", &end);
	printf("�հ�  �ε���\n");    
	
	for (index ; index <= end; index+= 2);
    {
        val =val+ index;
        printf("%03d %4d\n", val, index);
    }

    return 0;
}



























/*{
	int index=1, val=0, end;
	
	printf("�ε��� ���۰���?"); scanf("%d", &index);
	printf("�ε��� ���ᰪ��?"); scanf("%d", &end);
	printf("�հ�  �ε���\n");    
	
	while(index<=end)
	{
		val=val+index;
		printf("%03d %4d\n", val, index);
		index=index+2; 
		
		
		 
	 } 
	
	
	
	
	
	
	
	int i=0;
	while(i<20)                               (1)������ ��  
	{                                       Ż�� break; vs continue;
	printf("Hello World! \n");
	i++;
	}  
	
	int a=0, b=0;
	int num=0;
	while(a<10)
	{
		while(b<10)
		{
			num++;
			b++;
		}
		a++;
		b=0;
	}  
	
	//for(�ʱ�;����;����)
	int i;
	for(i=0; i<5; i++)
	{
		printf("Hello World! \n");
	} 
  
}*/
