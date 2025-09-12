#include<stdio.h>
int main()
{
	int appleQty,oilQty,milkQty;
	int appleprice,oilprice, milkprice;
	int total;
	int paid;
	
	appleprice =50;
	oilprice = 25;
	milkprice =30;
	
	printf(" enter quantity og apple (kg)");
	scanf("%d",&appleQty);
	
	printf(" enter quantity og oil (ltr)");
	scanf("%d",&oilQty);
	
	printf(" enter quantity og milk (ltr)");
	scanf("%d",&milkQty);
	
	total=(appleQty*appleprice +oilQty*oilprice + milkQty*milkprice);
	printf("Total bill amount : %d\n",total);
	
	printf("enter amount paid by customer ?");
	scanf("%d",&paid);
	
	printf("change to return= %d\n", paid-total);
	return 0;
}
