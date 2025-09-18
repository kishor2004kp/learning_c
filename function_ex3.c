#include<stdio.h>
void printSum(int a,int b){
	printf("sum=%d\n",a+b);
}

void printSub(int a,int b){
	printf("sub=%d\n",a-b);
}

void printMultiplication(int a,int b){
	printf("multiplication=%d\n",a*b);
}

void printDivision(int a,int b){
	printf("division=%d\n",a/b);
}
  int main()
  {
  	printSum(45,7);
  	printSub(45,7);	
  	printMultiplication(45,7);
	printDivision(45,7);
	  return 0;
	    }
