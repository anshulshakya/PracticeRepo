#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int menu();
int main()
{
while(1)
{
system("cls");
switch(menu())
{
	case 1:
	float l,b,r,a,p,s;
	printf("enter the l,b,r");
	scanf("%f%f%f",&l,&b,&r);
	p=2*(l+b);
	a=3.14*r*r;
	s=2*3.14*r;
	printf("p=%f\na=%f\ns=%f",p,a,s);
	break;
	case 2:
		exit(0);
		default :
			printf("invalid choice");
}
	getch();
	
}
}
int menu()
{
	int ch;
	printf("\n1:start calculations \n2:Exit");
	printf("\nEnter your choice ");
	scanf("%d",&ch);
	return(ch);
}
