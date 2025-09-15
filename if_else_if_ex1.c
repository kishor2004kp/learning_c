#include<stdio.h>
int main()
{
	int age;
	
	printf("enter  your age :");
	scanf("%d",&age);
	
	
	if(age<5){
		
		printf("ticket free - enjoy");
	}
	
	else if (age>5 && age<10){
		printf("half-ticket");
	}
	else if(age>10 && age<60){
		printf("full-ticket");
	}
	else if (age>60 && age<75){
		printf("cenior citizon - half");
	}
		printf("free-ticket");

}
