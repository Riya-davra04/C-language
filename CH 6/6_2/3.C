#include<stdio.h>
#include<conio.h>
main ()
{
	int n,a;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&a);

	for(n = 1 ; n<=a; n++)
	{
		printf("Numbar : %d\n",n);

	}
	getch();
}