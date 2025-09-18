#include<stdio.h>
int main()
{
	int choice,balance = 1000, amount;
	char cont;
	
	do{
		printf("-----ATM Menu-----");
		printf("1.Check Balance \n");
		printf("2.Deposite Money \n");
		printf("3.Withdraw Money \n");
		printf("0.Exit \n");
		printf("-------------\n");
		
		
		printf("Enter your Choice :");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1: printf("Your balance is =%d",balance);
			        break;
			case 2: printf("Enter amount to Deposite :");
			        scanf("%d",&amount);
			        balance +=amount;
			        printf("Deposited Sucussefully,new balance is=%d",balance);
		    case 3: printf("Enter amount to be Withdraw :");
		            scanf("%d",&amount);
		            if(amount<=balance){
		         	balance-=amount;
		         	printf("Withdraw Sucessfully, New Balance is =%d\n",balance);
		         	
		         	}
		         	else{
		         		printf("Insufficent Balance \n");
					 }break;
		    case 0: printf("Exiting ATM....\n");break;
		    
		    default:printf("Invalid choice");
		    
			
		}
		if (choice !=0){
			printf("\n Do want to  Continue (y/n)");
			scanf("%c",&cont);
		} else{
				cont ='n';
		}
		
		
	} while(cont=='y' || cont=='y' );
	
	return 0;
		
		
	}

