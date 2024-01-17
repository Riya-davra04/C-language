#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,n,simpleinterest;
	clrscr();
	printf("Enter the value of p: ");
	scanf("%f",&p);
	printf("Enter the value of r: ");
	scanf("%f",&r);
	printf("Enter the value of n: ");
	scanf("%f",&n);
	simpleinterest=p*r*n/100;
	printf("\nSimple interest\t:%f",simpleinterest);

	getch();
}