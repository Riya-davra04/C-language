#include<stdio.h>
#include<conio.h>
main ()
{
	int n,a=2;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	do
	{
		printf("Numbar : %d\n",a);
		a+=2;
	}
	while(a<=n);
	getch();
}