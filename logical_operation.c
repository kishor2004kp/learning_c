#include<stdio.h>

int main()
{
	int x,y;
	
	printf("enter x value: ");
	scanf("%d",&x);
	
	printf("enter y value: ");
	scanf("%d",&y);
    
   printf("logical operation result :-");
   printf("AND result : %d\n",(x>5&& y<10));    //and
   printf("OR result : %d\n",(x>5 || y<10));    // or
   printf("NOT result : %d\n",!(x> y<10));      //not

   
   return 0;
   
}
