#include<stdio.h>
int main()
{
int pin = 1234567890;
int balance = 10000;
int entered;
int choice,deposit,withdraw;
clrscr();
printf("Enter pin: ");
scanf ("%d",&entered);
printf("Enter your choice \n");
printf("1.Balance\n");
printf("2.Deposit\n");
printf("3.withdraw\n");
scanf ("%d",& choice);
switch (choice)
{
case 1 : if(entered==pin)
	{
	printf("pin correct\n");
	}
	else
	{
	printf("Incorrect pin\n");
	}
	break;

case 2 :printf("Enter deposit amount");
	scanf("%d",&deposit);
	if(balance+deposit)
	printf("%d", balance+deposit);
	break;

case 3 : printf("Enter withdraw amount\n");
	 scanf("%d",&withdraw);
	 if
	 (balance>withdraw)
	 {
	 printf("Sufficient balance\n");
	 }
	 else
	 {
	 printf("Insufficient balance\n");
	 }
	 break;
}
  {
    printf("Thank you");
  }

  return 0;

}

