#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int nob=0,nos=0,noc=0,amount=0,count=0;
void bus();
void scooter();
void car();
void status();
void delet();
int menu();
int main()
{
	while(1)
{
switch(menu())
{

case 1:
bus();
break;
case 2:
scooter();
break;
case 3:
car();
break;
case 4:
	status();
	break;
	case 5:
		delet();
		break;
		case 6:
		//goto ans;
		//break;
		exit(0);
			default :
				printf("invalid choice");
			}
			getch();
			system("cls");
			
}
//ans:
//	printf("end");
}


int menu()
{
	int ch;
printf("\n1:Bus Entery \n2:Scooter Entery \n3:Car Entery \n4:Status \n5:Delete \n6:Exit");
printf("\n\nEnter your choice");
scanf("%d",&ch);
return(ch); 
}


void bus()
{
	nob++;
	count++;
	amount=amount+20;
	printf("Entry successful");
}


void scooter()
{
	nos++;
	count++;
	amount=amount+5;
	printf("Entry successful");
}


void car()
{
	noc++;
	count++;
	amount=amount+10;
	printf("Entry successful");
}


void status()
{
	printf("\nNo of bus=%d",nob);
	printf("\nNo of scooter=%d",nos);
	printf("\nNo of car=%d",noc);
	printf("\nTotal no of vehicles=%d",count);
	printf("\n Total amount=%d",amount);
	
}


void delet()
{
	count=0;
	nos=0;
	nob=0;
	noc=0;
	amount=0;
}
