#include<stdio.h>
#include<conio.h>
main()
{
	int n ,total_bill;
	float electricity_bill;
	clrscr();

	printf("Enter Electricity Units: ");
	scanf("%d",&total_bill);


	if(n>=0 && n<=50)
	{
	       electricity_bill=(total_bill*0.50);
	}
	else if(n>50 && n<=150)
	{
		electricity_bill=25+(total_bill-50)*0.75;
	}
       else if(n>150 && n<=250)
	{
		electricity_bill=100+(total_bill-150)*1.20;
	}
	else
	{
		 electricity_bill=220+(total_bill-250)*1.50;

	}
		 electricity_bill=electricity_bill+0.20*electricity_bill;
		 printf("Electricity Bill : Rs.%.2f\n",electricity_bill);
	getch();
}