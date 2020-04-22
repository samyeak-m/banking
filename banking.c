#include <stdio.h>
#include<conio.h>

int k=0;
int ph;
int ob=0;
int o;
int d=0;
int wh=0;

char fn[10];
char ln[10];
char ad[10];

char transaction;

void withdraw();
void depostied();
void account();
void balance();
void transcation();

int main()
{
	printf("Select any option.");
	transcation();
	
	return 0;
}

void transcation()
{
	
	do{
		
		printf("\n1.Open Account\n2.Withdraw Cash\n3.Depostied Cash\n4.Check Balance\n");
		scanf("%d",&o);
		
		switch(o)
		{
			case 1:
				{
					account();
					break;
				}
				
			case 2:
				{
					withdraw();
					break;
				}
				
			case 3:
				{
					depostied();
					break;
				}
				
			case 4:
				{
					balance();
					break;
				}
				
				
			default:
				{
					printf("Invalid");
					
				}
		}
		
		{
			choose:
			{
				printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

				scanf("%s", &transaction);
				if (transaction == 'n'|| transaction == 'N')
		                {
							k=1;
						}
				
				else if(transaction == 'y'|| transaction == 'Y')
				{
					k=0;
				}
				
				else
				{
					printf("invaild");
					goto choose;
				}
			}
		}
	} while (k==0);
	printf("\n\n\tTHANKS FOR USING OUR SERVICE");
}


void account(){
	
	printf("AccountHolder First Name :\n");
	scanf("%s",&fn);
	
	printf("AccountHolder Last Name :\n");
	scanf("%s",&ln);
	
	printf("AccountHolder Address :\n");
	scanf("%s",&ad);
	
	printf("AccountHolder phone:\n");
	scanf("%d",&ph);
	
	printf("Opening Balance :\n");
	scanf("%d",&ob);
	
	printf("\n\tAccount open.");
}

void withdraw(){
	
	printf ("\nAmount of money you want to withdraw.\n");
	scanf("%d",&wh);
	
	if(wh<ob)
	{
		ob=ob-wh;
		printf("\nYour withdraw amount: %d",wh);
		printf("\nYour New Balance : %d",ob);
	}
	else
	{
		printf("You dont have sufficient amout in your account.");
	}
	
}

void depostied(){
	printf("\nAmount of money you want to Depostie.\n");
	scanf("%d",&d);
	printf("\nYour Depostied Amount: %d",d);
	ob=d+ob;
	printf("\nYour New Balance: %d",ob);
}

void balance(){
	printf("\nAccountHolder Name : %s %s",fn,ln);
	printf("\nAccountHolder Address : %s",ad);
	printf("\nAccountHolder phone : %d",ph);
	printf("\nYour Balance Amount : %d",ob);	
}
