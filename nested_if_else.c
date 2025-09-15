#include<stdio.h>
int main()
{
	int ticket, idproof, luggauge;
	
	printf("Dou you have a ticket? (1 = yes , 0- no)");
	scanf("%d",&ticket);
	
	if(ticket==1){
		
		printf("Do you have a id proof ? (1 = yes, 0-no)");
		scanf("%d",&idproof);
		if(idproof ==1){
			
			printf("Is luggauge within 20 kg? ( 1 = yes , 0-no) ");
			scanf("%d",&luggauge);
			if(luggauge==1){
				scanf("Check in Sucessfully");

			}
			else{
				printf("Extra luggauge charges apply");
			}
			
            else{
				printf("Id proof required");
			}
			else{
				printf("No ticket , No Entry");
			}
			return 0;
		}
	}
	}
