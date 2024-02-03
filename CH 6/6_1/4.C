#include<stdio.h>
#include<conio.h>
main ()
{
	int n=1 ,a;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&a);

	while(a>=n)
	{
		if(a%2==1)
		{
			printf("This number is odd: %d\n",a);
		}
		a-- ;
	}
	getch();
}