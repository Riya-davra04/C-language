#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,result;
	clrscr();
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	result=(a+b)*(a+b)*(a+b);
	printf("Result: %d",result);
	getch();
}