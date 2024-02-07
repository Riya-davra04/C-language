#include<stdio.h>
#include<conio.h>

main()
{
	int n , count=0;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	while(n!=0)
	{
		n/=10;
		count++;
	}

	printf("Total Digits : %d\n",count);

	getch();
}