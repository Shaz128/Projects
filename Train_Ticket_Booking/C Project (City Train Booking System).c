#include <stdio.h>
#include <string.h>
	char name[50];
	char c;
int local(){
	int spoint=0;
	int desti=0;
	int dis=0;
	int dis1;
	int pass=123456;
	int final=0;
printf("\n\tPress 1 For Point A\n\tPress 2 For Point B\n\tPress 3 For Point C\n\tPress 4 For Point D\n\t");
printf("\n\tEnter Your Starting Point:\n\t");
scanf("%d",&spoint);
printf("\n\tEnter Your Destination:\n\t");
scanf("%d",&desti);


int total = 0;
int count = 16;
int a;
int b;
int c;
int e = 1;
char d[20];
switch(spoint){
	case 1:
		switch(desti){
			case 1:
				printf("\n\tYou Entered Same Destination As Your Staring Point\n\t");
				return 0;
			case 2:
				printf("\n\tYour Starting Point Is A And Destination Is Point B\n\t");
				printf("\n\tTiming 1: 07:00 - 08:00\n\tTiming 2: 12:00 - 01:00\n\tTiming 3: 05:00 - 06:00\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
				scanf("\n\t%d",&c);
				switch(c)
				{
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 07:00 - 08:00\n\t");
							printf("\n\t====================================\n\t");
						break;
					case 2:
							printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 12:00 - 01:00\n\t");
							printf("\n\t====================================\n\t");
						break;
						
					case 3:
							printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 05:00 - 06:00\n\t");
							printf("\n\t====================================\n\t");
						break;		
					default:
							printf("\n\t====================================\n\t");
						printf("\n\tYou Choose Wrong Slot\n\t");
							printf("\n\t====================================\n\t");
						break;
					}
				total = 30;
					printf("\n\t====================================\n\t");
				printf("\n\tYour Total Price Is %d\n\t",total);
					printf("\n\t====================================\n\t");
				break;
			
			case 3:
				printf("\n\tYour Starting Point Is A And Destination Is Point C\n\t");
				printf("\n\tTiming 1: 07:00 - 09:20\n\tTiming 2: 12:00 - 02:20\n\tTiming 3: 05:00 - 07:20\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 07:00 - 09:20\n\t");
						printf("====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
					printf("\n\tYour Time Slot Is From 12:00 - 02:20\n\t");
					printf("\n\t====================================\n\t");
						break;
					case 3:
					printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 05:00 - 07:20\n\t");
					printf("\n\t====================================\n\t");
						break;		
					default:
					printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slot\n\t");
					printf("\n\t====================================\n\t");
						break;
					}
				total = 60;
				printf("\n\t===================================\n\t");
					
				printf("\n\tYour Total Price Is %d\n\t",total);
			printf("\n\t====================================\n\t");
						break;
				
			case 4:
				printf("\n\tYour Starting Point Is A And Destination Is Point D\n\t");
				printf("\n\tTiming 1: 09:40 - 01:00\n\tTiming 2: 02:40 - 06:00\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
					
					printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 09:40 - 01:00\n\t");
					printf("\n\t====================================\n\t");
						break;
					case 2:
					printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 02:40 - 06:00\n\t");
					printf("\n\t====================================\n\t");
						break;
							
					default:
					printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slot\n\t");
					printf("\n\t====================================\n\t");
						break;
					}
				total = 90;
				printf("\n\tYour Total Price Is %d\n\t",total);
				break;
	        	default:
			        printf("\n\t====================================\n\t");
					    printf("\n\tYou Enter Wrong Option\n\t");
			        printf("\n\t====================================\n\t");
					    return 0;
		
				}
				
break;	
	case 2:
		switch(desti){
			case 1:
				printf("\n\t====================================\n\t");
					printf("\n\tYour Starting Point Is B And Destination Is Point A\n\t");
				printf("\n\t====================================\n\t");
				printf("\n\t====================================\n\t");
						printf("\n\tTiming 1: 08:20 - 11:00\n\tTiming 2: 01:20 - 04:00\n\tTiming 3: 06:20 - 09:00\n\t");
			printf("\n\t====================================\n\t");
						printf("\n\tPlease Select Your Preferred Timmings:\n\t");
				printf("\n\t====================================\n\t");
					scanf("\n\t%d",&c);
				switch(c){
					case 1:
					printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 08:20 - 11:00\n\t");
					printf("\n\t====================================\n\t");
						break;
					case 2:
					printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 01:20 - 04:00\n\t");
					printf("\n\t====================================\n\t");
						break;
					case 3:
					printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 06:20 - 09:00\n\t");
					printf("\n\t====================================\n\t");
						break;		
					default:
					printf("\n\t====================================\n\t");
						printf("\n\tYou Enter WRong Slow\n\t");
					printf("\n\t====================================\n\t");
						break;
					}
				total = 90;
				printf("\n\t====================================\n\t");
					printf("\n\tYour Total Price Is %d\n\t",total);
				printf("\n\t====================================\n\t");
					break;
			
			case 2:
			printf("\n\t====================================\n\t");
						printf("\n\tYou Entered Same Destination As Your Staring Point\n\t");
				printf("\n\t====================================\n\t");
					return 0;
			
			case 3:
		printf("\n\t====================================\n\t");
				printf("\n\tYour Starting Point Is B And Destination Is Point C\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tTiming 1: 08:20 - 09:20\n\tTiming 2: 01:20 - 02:20\n\tTiming 3: 06:20 - 07:20\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
		printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 08:20 - 09:20\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 2:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 01:20 - 02:20\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 3:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 06:20 - 07:20\n\t");
		printf("\n\t====================================\n\t");
						break;		
					default:
		printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slow\n\t");
		printf("\n\t====================================\n\t");
						break;
					}
				total = 30;
		printf("\n\t====================================\n\t");
				printf("\n\tYour Total Price Is %d\n\t",total);
		printf("\n\t====================================\n\t");
				break;
				
			case 4:
		printf("\n\t====================================\n\t");
				printf("\n\tYour Starting Point Is B And Destination Is Point D\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tTiming 1: 08:20 - 01:00\n\tTiming 2: 01:20 - 06:00\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
		printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 08:20 - 01:00\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 2:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 01:20 - 06:00\n\t");
		printf("\n\t====================================\n\t");
						break;		
					default:
		printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slot\n\t");
		printf("\n\t====================================\n\t");
						break;
					}
				total = 60;
		printf("\n\t====================================\n\t");
				printf("\n\tYour Total Price Is %d\n\t",total);
		printf("\n\t====================================\n\t");
				break;
		default:
		printf("\n\t====================================\n\t");
			printf("\n\tYou Enter Wrong Option\n\t");
		printf("\n\t====================================\n\t");
			return 0;
		
				}
				break;			
case 3:
		switch(desti){
			case 1:
		printf("\n\t====================================\\n\t");
				printf("\n\tYour Starting Point Is C And Destination Is Point A\n\t");
		printf("\n\t====================================\n\t");
			
	printf("\n\tTiming 1: 09:40 - 11:00\n\tTiming 2: 02:40 - 04:00\n\tTiming 3: 07:40 - 09:00\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
							printf("\n\t====================================\n\t");
							printf("\n\tYour Time Slot Is From 09:40 - 11:00\n\t");
					printf("\n\t====================================\n\t");
			break;
					case 2:
						printf("\n\t====================================\n\t");
		printf("\n\tYour Time Slot Is From 02:40 - 04:00\n\t");
					printf("\n\t====================================\n\t");
			break;
					case 3:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 07:40 - 09:00\n\t");
		printf("\n\t====================================\n\t");
						break;		
					default:
		printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slot\n\t");
		printf("\n\t====================================\n\t");
						break;
					}
				total = 30;
		printf("\n\t====================================\n\t");
				printf("\n\tYour Total Price Is %d\n\t",total);
		printf("\n\t====================================\n\t");
				break;
			
			case 2:
		printf("\n\t====================================\n\t");
				printf("\n\tYour Starting Point Is C And Destination Is Point B\n\t");
		printf("\n\t====================================\n\t");
	
	printf("\n\tTiming 1: 09:40 - 01:00\n\tTiming 2: 02:40 - 06:00\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
		printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 09:40 - 01:00\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 2:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 02:40 - 06:00\n\t");
		printf("\n\t====================================\n\t");
						break;
							
					default:
		printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slot\n\t");
		printf("\n\t====================================\n\t");
						break;
					}
				total = 60;
		printf("\n\t====================================\n\t");
				printf("\n\tYour Total Price Is %d\n\t",total);
		printf("\n\t====================================\n\t");
				break;
			
			case 3:
		printf("\n\t====================================\n\t");
				printf("\n\tYou Entered Same Destination As Your Staring Point\n\t");
		printf("\n\t====================================\n\t");
				return 0;
				
			case 4:
		printf("\n\t====================================\n\t");
				printf("\n\tYour Starting Point Is C And Destination Is Point D\n\t");
		printf("\n\t====================================\n\t");
	
	printf("\n\tTiming 1: 07:00 - 08:00\n\tTiming 2: 12:00 - 01:00\n\tTiming 3: 05:00 - 06:00\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
		printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 07:00 - 08:00\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 2:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 12:00 - 01:00\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 3:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 05:00 - 06:00\n\t");
		printf("\n\t====================================\n\t");
						break;		
					default:
		printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slot\n\t");
		printf("\n\t====================================\n\t");
						break;
					}
				total = 30;
		printf("\n\t====================================\n\t");
				printf("\n\tYour Total Price Is %d\n\t",total);
		printf("\n\t====================================\n\t");
				break;
		default:
		printf("\n\t====================================\n\t");
			printf("\n\tYou Enter Wrong Option\n\t");
		printf("\n\t====================================\n\t");
			return 0;
		
				}
				break;
case 4:
		switch(desti){
			case 1:
		printf("\n\t====================================\n\t");
				printf("\n\tYour Starting Point Is D And Destination Is Point A\n\t");
		printf("\n\t====================================\n\t");

	printf("\n\tTiming 1: 08:20 - 09:20\n\tTiming 2: 01:20 - 02:20\n\tTiming 3: 06:20 - 07:20\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
		printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 08:20 - 09:20\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 2:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 01:20 - 02:20\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 3:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 06:20 - 07:20\n\t");
		printf("\n\t====================================\n\t");
						break;		
					default:
		printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slot\n\t");
		printf("\n\t====================================\n\t");
						break;
					}
				total = 30;
		printf("\n\t====================================\n\t");
				printf("\n\tYour Total Price Is %d\n\t",total);
		printf("\n\t====================================\n\t");
				break;
				
			
			case 2:
		printf("\n\t====================================\n\t");
				printf("\n\tYour Starting Point Is D And Destination Is Point B\n\t");
		printf("\n\t====================================\n\t");
	
	printf("\n\tTiming 1: 08:20 - 01:00\n\tTiming 2: 01:20 - 06:00\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
		printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 08:20 - 01:00\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 2:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 01:20 - 06:00\n\t");
		printf("\n\t====================================\n\t");
						break;
						
					default:
		printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slot\n\t");
		printf("\n\t====================================\n\t");
						break;
					}				
				total = 60;
		printf("\n\t====================================\n\t");
				printf("\n\tYour Total Price Is %d\n\t",total);
		printf("\n\t====================================\n\t");
				break;
			
			case 3:
		printf("\n\t====================================\n\t");
				printf("\n\tYour Starting Point Is C And Destination Is Point D\n\t");
		printf("\n\t====================================\n\t");

	printf("\n\tTiming 1: 07:00 - 08:00\n\tTiming 2: 12:00 - 01:00\n\tTiming 3: 05:00 - 06:00\n\t");
		printf("\n\t====================================\n\t");
				printf("\n\tPlease Select Your Preferred Timmings:\n\t");
		printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 08:20 - 11:00\n\t");
		printf("\n\t====================================\n\t");
						break;
					case 2:
		printf("\n\t====================================\n\t");
						printf("\n\tYour Time Slot Is From 01:20 - 04:00\n\t");
		printf("\n\t====================================\n\t");
						break;					
case 3:
			printf("\n\t====================================\n\t");
					printf("\n\tYour Time Slot Is From 06:20 - 09:00\n\t");
		printf("\n\t====================================\n\t");
						break;		
					default:
		printf("\n\t====================================\n\t");
						printf("\n\tYou Enter Wrong Slow\n\t");
		printf("\n\t====================================\n\t");
						break;
					}				
				total = 30;
		printf("\n\t====================================\n\t");
				printf("\n\tYour Total Price Is %d\n\t",total);
		printf("\n\t====================================\n\t");
				break;
				
			case 4:
		printf("\n\t====================================\n\t");
			printf("\n\tYou Entered Same Destination As Your Staring Point\n\t");
		printf("\n\t====================================\n\t");
				return 0;
			default:
		printf("\n\t====================================\n\t");
			printf("You Enter Wrong Option");
		printf("\n\t====================================\n\t");
			return 0;
			
				}
				break;
default:
		printf("\n\t====================================\n\t");
			printf("\n\tYou Enter Wrong Option\n\t");
		printf("\n\t====================================\n\t");
			return 0;
}
printf("\n\tDo You Want Additional Service\n\t");
printf("\n\tPress 1 For Yes \n\tPress 2 For No\n\t");
scanf("%d",&a);
while(a == 1){
	printf("\n\tPress 1 For Food\n\tPress 2 For Coolie\n\tPress 3 For Wheelchair Service\n\t");
	scanf("%d",&b);
	switch(b){
		case 1:
		printf("\n\t====================================\n\t");
			printf("\n\tAmount For Food Is Added In Your Bill\n\t");
		printf("\n\t====================================\n\t");
			total = total + 5;
			break;
		
		case 2:
		printf("\n\t====================================\n\t");
			printf("\n\tAmount For Coolie Is Added In Your Bill\n\t");
		printf("\n\t====================================\n\t");
			total = total + 10;
			break;
	    case 3:
		printf("\n\t====================================\n\t");
			printf("\n\tAmount For Wheelchair Is Added In Your Bill\n\t");
		printf("\n\t====================================\n\t");
			total = total + 15;
			break;
		default:
		printf("\n\t====================================\n\t");
			printf("\n\tError 404\n\t");
		printf("\n\t====================================\n\t");
			break;
	
	}
	printf("\n\tDo You Want To Add Another Service\n\tPress 1 For Adding\n\tPress 0 For Exit\n\t");
	scanf("%d",&a);
	if(a != 1 && a != 0){
	printf("\n\tInvalid Input\n\t");
	
}


}


printf("\n\tDo You Have Train Pass\n\t");
printf("\n\tpress 1 for yes\n\tpress 0 for no\n\t");
scanf("%d",&dis);
if(dis == 1){
	printf("\n\tEnter The Pass Code\n\t");
scanf("%d",&dis1);
		if(dis1 == pass){
		final = total * 0.85;
		printf("\n\tYour Seat Is Booked In A.C Compartment\n\t");
}else{
		printf("\n\tYou Have Enter Wrong Code\n\t");
	final = total;
}
	
}else{
	printf("\n\tThank You for Choosing Us!\n\t");
}



printf("\n\t===============================\n\t");
puts(name);
printf("\n\tYour Total Bill : %d RS\n\t",final);

printf("\n\t===============================\n\t");
}






int lux(){
		int dis=0;
	int dis1;
	int pass=123456;
	int final=0;
	int spoint=0;
	int desti=0;
printf("\n\tPress 1 for point A \n\tPress 2 for point B\n\tPress 3 for point C\n\tPress 4 for point D\n\t");
printf("\n\tEnter your starting point\n\t");
scanf("%d",&spoint);
printf("\n\tEnter your destination\n\t");
scanf("%d",&desti);

int total = 0;
int count = 16;
int a;
int b;
int c;
int d;
switch(spoint){
	case 1:
		switch(desti){
			case 1:
				printf("\n\t====================================\n\t");
				printf("\n\tYou entered same destination as your staring point\n\t");
				printf("\n\t====================================\n\t");
				break;
			
			
			case 2:
				printf("\n\t====================================\n\t");
				printf("\n\tYour starting point is A and destination is point B\n\t");
				printf("\n\t====================================\n\t");
				
                printf("\n\tTiming 1: 07:00 - 07:30\n\tTiming 2: 10:00 - 10:30\n\tTiming 3: 01:00 - 01:30\n\tTiming 4: 04:00 - 04:30\n\tTiming 5: 07:00 - 07:30\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:00 - 07:30\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 10:00 - 10:30\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 01:00 - 01:30\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 04:00 - 04:30\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 5:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:00 - 07:30\n\t");
						printf("\n\t====================================\n\t");
						break;		
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}
					
				total = 50;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
			
			case 3:
				printf("\n\t====================================\n\t");
				printf("\n\tyour starting point is a and destination is point c\n\t");
				printf("\n\t====================================\n\t");
                printf("\n\tTiming 1: 07:00 - 07:45\n\tTiming 2: 10:00 - 10:45\n\tTiming 3: 01:00 - 01:45\n\tTiming 4: 04:00 - 04:45\n\tTiming 5: 07:00 - 07:45\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:00 - 07:45\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 10:00 - 10:45\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 01:00 - 01:45\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
							printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 04:00 - 04:45\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 5:
							printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:00 - 07:45\n\t");
						printf("\n\t====================================\n\t");
						break;		
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}				
				total = 50;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
				
			case 4:
				printf("\n\t====================================\n\t");
				printf("\n\tyour starting point is a and destination is point d\n\t");
				printf("\n\t====================================\n\t");

                printf("\n\tTiming 1: 07:00 - 10:30\n\tTiming 2: 10:00 - 01:30\n\tTiming 3: 01:00 - 04:30\n\tTiming 4: 04:00 - 07:30\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:00 - 10:30\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 10:00 - 01:30\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 01:00 - 04:30\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 04:00 - 07:30\n\t");
						printf("\n\t====================================\n\t");
						break;		
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}				
				total = 100;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
			    default:
				printf("\n\t====================================\n\t");
			    printf("\n\tyou pressed a wrong option\n\t");
			    printf("\n\t====================================\n\t");
			    return 0;
			
				}
				
break;	
	case 2:
		switch(desti){
			case 1:
				printf("\n\t====================================\n\t");
				printf("\n\tyour starting point is b and destination is point a\n\t");
                printf("\n\t====================================\n\t");
                printf("\n\tTiming 1: 07:50 - 09:05\n\tTiming 2: 10:50 - 12:05\n\tTiming 3: 01:50 - 03:05\n\tTiming 4: 04:50 - 06:05\n\tTiming 5: 07:50 - 09:05\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:50 - 09:05\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 10:50 - 12:05\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 01:50 - 03:05\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
							printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 04:50 - 06:05\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 5:
							printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:50 - 09:05\n\t");
						printf("\n\t====================================\n\t");
						break;		
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}				
				total = 100;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
			
			case 2:
				printf("\n\t====================================\n\t");
				printf("\n\tyou entered same destination as your staring point\n\t");
				printf("\n\t====================================\n\t");
				break;
			
			case 3:
				printf("\n\t====================================\n\t");
				printf("\n\tyour starting point is b and destination is point c\n\t");
				printf("\n\t====================================\n\t");
                printf("\n\tTiming 1: 07:50 - 08:20\n\tTiming 2: 10:50 - 11:20\n\tTiming 3: 01:50 - 02:20\n\tTiming 4: 04:50 - 05:20\n\tTiming 5: 07:50 - 08:20\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\n\tplease select your preferred timmings:\n\n");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:50 - 08:20\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 10:50 - 11:20\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 01:50 - 02:20\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 04:50 - 04:20\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 5:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:50 - 08:20\n\t");
						printf("\n\t====================================\n\t");
						break;		
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}			
				total = 50;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
				
			case 4:
				printf("\n\t====================================\n\t");
				printf("\n\tyour starting point is b and destination is point d\n\t");
				printf("\n\t====================================\n\t");
                printf("\n\tTiming 1: 08:05 - 08:50\n\tTiming 2: 11:05 - 11:50\n\tTiming 3: 02:05 - 02:50\n\tTiming 4: 05:05 - 05:50\n\tTiming 5: 08:05 - 08:50\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 08:05 - 08:50\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 11:05 - 11:50\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 02:05 - 02:50\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 05:05 - 05:50\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 5:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 08:05 - 08:50\n\t");
						printf("\n\t====================================\n\t");
						break;		
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}
				total = 50;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
			default:
			printf("\n\t====================================\n\t");
			printf("\n\tyou pressed a wrong option\n\t");
			printf("\n\t====================================\n\t");
			return 0;
			
				}
				break;			
case 3:
		switch(desti){
			case 1:
				printf("\n\t====================================\n\t");
				printf("\n\tyour starting point is c and destination is point a\n\t");
				printf("\n\t====================================\n\t");
				printf("\n\tTiming 1: 08:05 - 08:50\n\tTiming 2: 11:05 - 11:50\n\tTiming 3: 02:05 - 02:50\n\tTiming 4: 05:05 - 05:50\n\tTiming 5: 08:05 - 08:50");
				printf("\n\t====================================\n\t");
				printf("\n\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("your time slot is from 08:05 - 08:50\n");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("your time slot is from 11:05 - 11:50\n");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("your time slot is from 02:05 - 02:50\n");
						printf("\n\t====================================\n\t");
						break;
						case 4:
							printf("\n\t====================================\n\t");
						printf("your time slot is from 05:05 - 05:50\n");
						printf("\n\t====================================\n\t");
						break;
						case 5:
							printf("\n\t====================================\n\t");
						printf("your time slot is from 08:05 - 08:50\n");
						printf("\n\t====================================\n\t");
						break;		
					default:
						printf("\n\t====================================\n\t");
						printf("you choose wrong slot\n");
						printf("\n\t====================================\n\t");
						break;
					}
				total = 50;
				printf("\n\t====================================\n\t");
				printf("your total price is %d",total);
				printf("\n\t====================================\n\t");
				break;
			
			case 2:
				printf("\n\t====================================\n\t");
				printf("\n\tyour starting point is c and destination is point b\n\t");
               	printf("\n\t====================================\n\t");
                printf("\n\tTiming 1: 08:40 - 10:30\n\tTiming 2: 11:40 - 01:30\n\tTiming 3: 02:40 - 04:30\n\tTiming 4: 05:40 - 07:30\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 08:40 - 10:30\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 11:40 - 01:30\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 02:40 - 04:30\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 05:40 - 07:30\n\t");
						printf("\n\t====================================\n\t");
						break;
							
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}				
				total = 100;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
			
			case 3:
				printf("\n\t====================================\n\t");
				printf("\n\tyou entered same destination as your staring point\n\t");
				printf("\n\t====================================\n\t");
				break;
				
			case 4:
				printf("\n\t====================================\n\t");
				printf("\n\tyour starting point is c and destination is point d\n\t");
				printf("\n\t====================================\n\t");
                printf("\n\tTiming 1: 07:00 - 07:30\n\tTiming 2: 10:00 - 10:30\n\tTiming 3: 01:00 - 01:30\n\tTiming 4: 04:00 - 04:30\n\tTiming 4: 07:00 - 07:30\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:00 - 07:30\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 10:00 - 10:30\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 01:00 - 01:30\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 04:00 - 04:30\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 5:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:00 - 07:30\n\t");
						printf("\n\t====================================\n\t");
						break;
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}
				total = 50;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
			    default:
			    printf("\n\t====================================\n\t");
			    printf("\n\tyou pressed a wrong option\n\t");
			    printf("\n\t====================================\n\t");
			    return 0;
			
				}
				break;
case 4:
		switch(desti){
			case 1:
				printf("\n\t====================================\n\t");
				printf("\n\tyour starting point is d and destination point is a\n\t");
				printf("\n\t====================================\n\t");
                printf("\n\tTiming 1: 07:50 - 08:20\n\tTiming 2: 10:50 - 11:20\n\tTiming 3: 01:50 - 02:20\n\tTiming 4: 04:50 - 05:20\n\tTiming 4: 07:50 - 08:20\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:50 - 08:20\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 10:50 - 11:20\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 01:50 - 02:20\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 04:50 - 05:20\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 5:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:50 - 08:20\n\t");
						printf("\n\t====================================\n\t");
						break;
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}				
				    total = 50;
			        printf("\n\t====================================\n\t");
			    	printf("\n\tyour total price is %d\n\t",total);
				    printf("\n\t====================================\n\t");
				    break;
				
			
			case 2:
					printf("\n\t====================================\n\t");
				    printf("\n\tyour starting point is d and destination is point b\n\t");
					printf("\n\t====================================\n\t");
			        printf("\n\tTiming 1: 07:00 - 07:45\n\tTiming 2: 10:00 - 10:45\n\tTiming 3: 01:00 - 01:45\n\tTiming 4: 04:00 - 04:45\n\tTiming 5: 07:00 - 07:45\n\t");
			        printf("\n\t====================================\n\t");
				    printf("\n\tplease select your preferred timmings:\n\t");
				    printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:00 - 07:45\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 10:00 - 10:45\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 01:00 - 01:45\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 04:00 - 04:45\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 5:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:00 - 07:45\n\t");
						printf("\n\t====================================\n\t");
						break;		
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}	
				
				total = 50;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
			
			case 3:
				printf("\n\t====================================\n\t");
				printf("your starting point is d and destination is point c\n");
				printf("\n\t====================================\n\t");
                printf("\n\tTiming 1: 07:50 - 09:05\n\tTiming 2: 10:50 - 12:05\n\tTiming 3: 01:50 - 03:05\n\tTiming 4: 04:50 - 06:05\n\tTiming 5: 07:50 - 09:05\n\t");
                printf("\n\t====================================\n\t");
				printf("\n\tplease select your preferred timmings:\n\t");
				printf("\n\t====================================\n\t");
				scanf("\n\t%d",&c);
				switch(c){
					case 1:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:50 - 09:05\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 2:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 10:50 - 12:05\n\t");
						printf("\n\t====================================\n\t");
						break;
					case 3:
						printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 01:50 - 03:05\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 4:
							printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 04:50 - 06:05\n\t");
						printf("\n\t====================================\n\t");
						break;
						case 5:
							printf("\n\t====================================\n\t");
						printf("\n\tyour time slot is from 07:50 - 09:05\n\t");
						printf("\n\t====================================\n\t");
						break;		
					default:
						printf("\n\t====================================\n\t");
						printf("\n\tyou choose wrong slot\n\t");
						printf("\n\t====================================\n\t");
						break;
					}				
				total = 100;
				printf("\n\t====================================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t====================================\n\t");
				break;
				
			case 4:
				printf("\n\t====================================\n\t");
			printf("\n\tyou entered same destination as your staring point\n\t");
			printf("\n\t====================================\n\t");
				break;
			
			default:
				printf("\n\t====================================\n\t");
			printf("\n\tyou pressed a wrong option\n\t");
			printf("\n\t====================================\n\t");
			return 0;
				}
				break;
default:
          	printf("\n\t====================================\n\t");
			printf("\n\tyou pressed a wrong option\n\t");
			printf("\n\t====================================\n\t");
			return 0;
}
printf("\n\tdo you want additional service\n\t");
printf("\n\tpress 1 for yes\n\tpress 2 for no\n\t");
scanf("%d",&a);
while(a == 1){
	printf("\n\tpress 1 for food\n\tpress 2 for coolie\n\tpress 3 for wheelchair service\n\t");
	scanf("%d",&b);
	switch(b){
		case 1:
			printf("\n\t====================================\n\t");
			printf("\n\tamount for food is added in your bill\n\t");
			printf("\n\t====================================\n\t");
			total = total + 10;
			break;
		
		case 2:
			printf("\n\t====================================\n\t");
			printf("\n\tamount for coolie is added in your bill\n\t");
			printf("\n\t====================================\n\t");
			total = total + 15;
			break;
		case 3:
			printf("\n\t====================================\n\t");
				printf("\n\tamount for wheelchair service is added in your bill\n\t");
				printf("\n\t====================================\n\t");
			total = total + 20;
			break;
		default:
			printf("\n\t====================================\n\t");
			printf("\n\tinvald\n\t");
			printf("\n\t====================================\n\t");
			break;
	
	}
	printf("\n\tDo You Want To Add Another Service\n\tPress 1 For Adding\n\tPress 0 For Exit\n\t");
	scanf("%d",&a);
	if(a != 1 && a != 0){
	printf("\n\tinvalid input\n\t");
	
}
}
printf("\n\tDo You Have Train Pass\n\t");
printf("\n\tpress 1 for yes\n\tpress 0 for no\n\t");
scanf("%d",&dis);
if(dis == 1){
	printf("\n\tEnter The Pass Code\n\t");
scanf("%d",&dis1);
		if(dis1 == pass){
		final = total * 0.85;
		printf("\n\tYour Seat Is Booked In A.C Compartment\n\t");
}else{
		printf("\n\tYou Have Enter Wrong Code\n\t");
	final = total;
}
	
}else{
	printf("\n\tThank You for Choosing Us!\n\t");
}



printf("\n\t===============================\n\t");
puts(name);
printf("\n\tYour Total Bill : %d RS\n\t",final);

printf("\n\t===============================\n\t");
}

int royal(){
		int dis=0;
	int dis1;
	int pass=123456;
	int final;
int spoint=0;
	int desti=0;
printf("\n\tpress 1 for point a\n\tpress 2 for point b\n\tpress 3 for point c\n\tpress 4 for point d\n\t");
printf("\n\tenter your starting point\n\t");
scanf("%d",&spoint);
printf("\n\tenter your destination\n\t");
scanf("%d",&desti);

int total = 0;
int count = 16;
int a;
int b;
int c;
switch(spoint){
	case 1:
		switch(desti){
			case 1:
				printf("\n\t===============================\n\t");
				printf("\n\tyou entered same destination as your staring point\n\t");
				printf("\n\t===============================\n\t");
				break;
			case 2:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is A and destination is point b\n\t");
				printf("\n\t===============================\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			
			case 3:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is a and destination is point c\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			case 4:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is a and destination is point d\n\t");
				printf("\n\t===============================\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			default:
			printf("\n\t===============================\n\t");
			printf("you pressed a wrong option");
			printf("\n\t===============================\n\t");
			return 0;
				}
				
				
break;	
	case 2:
		switch(desti){
			case 1:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is b and destination is point a\n\t");
				printf("\n\t===============================\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			
			case 2:
				printf("\n\t===============================\n\t");
				printf("you entered same destination as your staring point\n");
				printf("\n\t===============================\n\t");
				break;
			case 3:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is b and destination is point c\n\t");
				printf("\n\t===============================\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
				
			case 4:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is b and destination is point d\n\t");
				printf("\n\t===============================\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			default:
			printf("\n\t===============================\n\t");
			printf("\n\tyou pressed a wrong option\n\t");
			printf("\n\t===============================\n\t");
			return 0;	
				}
			break;			
case 3:
		switch(desti){
			case 1:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is c and destination is point a\n\t");
				printf("\n\t===============================\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			case 2:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is c and destination is point b\n\t");
				printf("\n\t===============================\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			case 3:
				printf("\n\t===============================\n\t");
				printf("\n\tyou entered same destination as your staring point\n\t");
				printf("\n\t===============================\n\t");
				break;
			case 4:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is c and destination is point d\n\t");
				printf("\n\t===============================\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			default:
				printf("\n\t===============================\n\t");
			printf("\n\tyou pressed a wrong option\n\t");
			printf("\n\t===============================\n\t");
			return 0;
				}
		    break;
case 4:
		switch(desti){
			case 1:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is d and destination is point a\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			case 2:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is d and destination is point b\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			case 3:
				printf("\n\t===============================\n\t");
				printf("\n\tyour starting point is d and destination is point c\n\t");
				printf("\n\t===============================\n\t");
				total = 100;
				printf("\n\t===============================\n\t");
				printf("\n\tyour total price is %d\n\t",total);
				printf("\n\t===============================\n\t");
				break;
			case 4:
				printf("\n\t===============================\n\t");
		 	    printf("\n\tyou entered same destination as your staring point\n\t");
		 	    printf("\n\t===============================\n\t");
				break;
			default:
			printf("\n\t===============================\n\t");
			printf("\n\tyou pressed a wrong option\n\t");
			printf("\n\t===============================\n\t");
			return 0;
				}
		   break;
default:   
            printf("\n\t===============================\n\t");
			printf("\n\tyou pressed a wrong option\n\t");
			printf("\n\t===============================\n\t");
			return 0;
}
printf("\n\tdo you want additional service\n\t");
printf("\n\tpress 1 for yes\n\tpress 2 for no\n\t");
scanf("%d",&a);
while(a == 1){
	printf("\n\tpress 1 for food\n\tpress 2 for coolie\n\tpress 3 for wheelchair service\n\t");
	scanf("%d",&b);
	switch(b){
		case 1:
			printf("\n\t===============================\n\t");
			printf("\n\tamount for food is added in your bill\n\t");
			printf("\n\t===============================\n\t");
			total = total + 20;
			break;
		case 2:
			printf("\n\t===============================\n\t");
			printf("\n\tamount for coolie is added in your bill\n\t");
			printf("\n\t===============================\n\t");
			total = total + 20;
			break;
		case 3:
			printf("\n\t===============================\n\t");
			printf("\n\tamount for wheelchair service is added in your bill\n\t");
			printf("\n\t===============================\n\t");
			total = total + 20;
			break;
		default:
			printf("\n\tinvald\n\t");
			break;
	
	}
	printf("\n\tDo You Want To Add Another Service\n\tPress 1 For Adding\n\tPress 0 For Exit\n\t");
	scanf("%d",&a);
	if(a != 1 && a != 0){
	printf("\n\tinvalid input\n\t");
	
}
}

printf("\n\tDo You Have Train Pass\n\t");
printf("\n\tpress 1 for yes\n\tpress 0 for no\n\t");
scanf("%d",&dis);
if(dis == 1){
	printf("\n\tEnter The Pass Code\n\t");
scanf("%d",&dis1);
		if(dis1 == pass){
		total = total * 0.85;
		printf("\n\tYour Seat Is Booked In A.C Compartment\n\t");
}else{
		printf("\n\tYou Have Enter Wrong Code\n\t");
	total = total;
}
	
}else{
	printf("\n\tThank You for Choosing Us!\n\t");
}



printf("\n\t===============================\n\t");
puts(name);
printf("\n\tYour Total Bill : %d RS\n\t",total);

printf("\n\t===============================\n\t");

}

	void intro(){
	
		int id;
	printf("\n\t************************************\n\t");
	printf("\n\tWELCOME TO CITY TRAIN BOOKING SYSTEM\n\t");
	printf("\n\tOur Stops:\n\t");
	printf("\n\tA for AishaManzil\n\t\n\tB for Badurabad\n\t\n\tC for Cattle Colony\n\t\n\tD for Defence\n\t");
	printf("\n\t************************************\n\t");
	printf("\n\tPlease Enter Your Name As Per CNIC\n\t"); 
    gets(name);
	}
int main(){
	int option;
	intro ();

printf("\n\tPress 1 For Local Train\n\tPress 2 For Luxary Train\n\tPress 3 For Royal\n\t");
	
	scanf("%d",&option);
	switch(option){
		case 1:
			local();
			break;
		
		case 2:
			lux();
			break;
			
		case 3:
			royal();
			break;
		
		default:
			printf("you pressed a wrong option");
			return 0;
			
	}
	
	return 0;
}
