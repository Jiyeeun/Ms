#include <stdio.h>
#include <conio.h>
int main()
{
/* int v1, v2;
	printf("value1?"); scanf("%d", &v1);
	printf("value2?"); scanf("%d", &v2);   //scanf�� ���ͱ��� �޾� ����
	
	for(;;)
	//while(1)
	{
	char k = getch();  //console�Լ� //Ư���� ���� ���� �� char��� int ���
	if(k=='+')  //""���̴� ���ڿ�(����), ''���̴� ���� ����  
	{
		printf("%d %c %d= %d\n",v1,k,v2,v1+v2);   //���� ��ȯ��  v1+v2=x	
	 }
	else if(k=='-')
	{
		printf("%d %c %d= %d\n",v1,k,v2,v1-v2);
	 }
	else if(k=='*')
	{
		printf("%d %c %d= %d\n",v1,k,v2,v1*v2); 
	 }
	else if(k=='/')
	{
		printf("%d %c %d= %d\n",v1,k,v2,(double)v1/(double)v2);
	 }
	else break;
	}*/
	
	
	
	int v1, v2;
	printf("value1?"); scanf("%d", &v1);
	printf("value2?"); scanf("%d", &v2);
	
for (;;)
{
	char k = getch();
	switch(k)
	{
		case '+':
		 printf("%d %c %d= %d\n",v1,k,v2,v1+v2);break;
		case '-':
		 printf("%d %c %d= %d\n",v1,k,v2,v1-v2);break; 
		case '*':
		 printf("%d %c %d= %d\n",v1,k,v2,v1*v2);break;
		case '/':
		 printf("%d %c %d= %d\n",v1,k,v2,(double)v1/(double)v2);break;
		default :break;
		
		
	}
}
	
}


