#include<stdio.h>

int main()
{
	int x,y,z;
	
	printf("enter x value: ");
	scanf("%d",&x);
	
	printf("enter y value: ");
	scanf("%d",&y);
	
	printf("enter z value: ");
	scanf("%d",&z);
	
printf("logical operation result :-");
   printf("AND result : %d\n",(x>5&& y<10 && z<25));    //and
   printf("OR result : %d\n",(x>5 || y<10 || z<5));    // or
   printf("NOT result : %d\n",!(x> y, y>z));      //not
	
	
	
	return 0;
}
