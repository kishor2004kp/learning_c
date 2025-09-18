#include<stdio.h>
void area(int length, int width)
{
  printf("Area = %d\n",length*width);	
}

int main()
{
	int l,w;
	printf("enter length");
	scanf("%d",&l);
	printf("enter width");
	scanf("%d",&w);
	area(l,w);
}
