#include<stdio.h>

int main(){
	
	int op; 
	char cont;
	int num1,num2;
	
	do{
		printf("-------Arithmatic Oparations-------\n");
		printf("1.Addition \n");
		printf("2.Substraction \n");
		printf("3.Multipication \n");
		printf("4. Division \n");
		printf("0. Exit \n");
		printf("--------------- \n");
		
		printf("Enter Your Choice Oparation : ");
		scanf("%d",&op);
		
	printf("Enter 1st Number:");
	scanf("%d",&num1);
	printf("Enter 2nd Number:");
	scanf("%d",&num2);
	
	switch(op){
		case 1: printf("Addition = %d",num1+num2);break;
		case 2: printf("Subtraction = %d",num1-num2);break;
		case 3: printf("Multification = %d",num1*num2);break;
		case 4: printf("Division = %d",num1+num2);break;
	
	default:printf("Invalid Choice \n");
	
			}
	
	if(op !=0){
		printf("\n Do You want to Continue (y/n)");
		scanf(" %c",&cont);
	}else{
		cont ='n';
	}

	}while(cont=='y' || cont=='Y');
	
	return 0;
}
