#include<stdio.h>
#include<conio.h>
main ()
{
	int n=1 ,a;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&a);

	while(n<=a)
	{
		printf("Numbar : %d\n",n);
		n++ ;
	}
	getch();
}