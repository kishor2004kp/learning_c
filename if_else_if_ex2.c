#include<stdio.h>
int main()
{
	int temprature;
	
		printf("enter temprature :");
	scanf("%d",&temprature);
	
	if(temprature>=50){
		
		printf("very hot");
	}
	else if (temprature<50 && temprature>25){
		printf("hot");
	}
	else if(temprature<25 && temprature>15){
		printf("modrate");
	}
	else if (temprature<15 && temprature>5){
		printf("cold");
	}
		else if (temprature<5){
		printf("very cold");
	}
	

}
	

