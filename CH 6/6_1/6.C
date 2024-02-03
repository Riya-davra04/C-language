#include<stdio.h>
#include<conio.h>
main ()
{
	int n ,a=1;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	while(a<=n)
	{
		if(a%2==1)
		{
			printf("This number is odd: %d\n",a);
		}
		a++ ;
	}
	getch();
}