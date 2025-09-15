#include<stdio.h>
int main()

{
	
	int amount;
	
	printf("enter your shopping amount");
	scanf("%d",&amount);
	
	if(amount>499)
{
	printf("congras, you get free dilivery");
	
}
else{
	printf("dilivery charges will apply");
}

}

