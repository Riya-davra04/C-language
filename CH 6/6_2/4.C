#include<stdio.h>
#include<conio.h>
main ()
{
	int n ,a;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&a);

	for(n = 1 ; a>=n ; a--)
	{
		printf("Numbar : %d\n",a);

	}
	getch();
}