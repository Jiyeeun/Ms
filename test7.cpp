#include <stdio.h>
#include <conio.h>
int main()
{
/* int v1, v2;
	printf("value1?"); scanf("%d", &v1);
	printf("value2?"); scanf("%d", &v2);   //scanf는 엔터까지 받아 전달
	
	for(;;)
	//while(1)
	{
	char k = getch();  //console함수 //특별한 사유 없는 한 char대신 int 사용
	if(k=='+')  //""사이는 문자열(구문), ''사이는 단일 문자  
	{
		printf("%d %c %d= %d\n",v1,k,v2,v1+v2);   //문자 변환자  v1+v2=x	
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


