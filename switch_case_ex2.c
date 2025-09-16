#include<stdio.h>
int main()

{
char op;
int a,b;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf("enter operator(+,-,*,/)");
scanf("%c",&op);

switch(op)
{
	case'+':printf("Sum =%d", a+b);
	break;
	
	case'-':printf("Diffrence = %d", a-b);
	break;
	
	case'*':printf("Multiplication = %d", a*b);
	break;
	
	case'/':printf("Division = %d", a/b);
	break;
	
	default:printf("Invalid character");
}
}


