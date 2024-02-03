#include<stdio.h>
#include<conio.h>
main()
{
	int n , a = 1, sum=0;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	while(a<=n)
	{
		sum=sum+a;
		a++;
	}

		printf("Sum  1 to %d : %d",n,sum);
	getch();
}