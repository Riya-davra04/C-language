#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2;
	clrscr();
	printf("Enter a value of the first number: ");
	scanf("%d",&n1);

	printf("Enter a value of the second number: ");
	scanf("%d",&n2);

	if(n1<n2)
	{
	   printf("%d is the minimum value",n1);
	}
	else
	{
	  printf("%d is the minimum value",n2);
	}
	getch();
}