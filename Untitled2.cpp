#include <stdio.h>

int main(void)
{
	int age, score; //정수 변수 선언문
	 
	
	printf("나이가 어떻게 되세요? : ", age); scanf("%d", &age);
	printf("점수는요? : ", score); scanf("%d", &score);
	
	printf("\nMy age : %d \n", age);
	printf("%d is my point \n", score);
	printf("Good \nmorning \neverybody\n"); 
	//printf("My age : %d \n%d is my point \nGood \nmorning \neverybody\n",20,100);
	
	return 0;

}



