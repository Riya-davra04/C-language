#include<stdio.h>
#include<conio.h>
main()
{
	int n , a, sum=0;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	{
		sum=sum+a;

	}

		printf("Sum  1 to %d : %d",n,sum);
	getch();
}