#include<stdio.h>
#include<conio.h>

main()
{
	int n ,sum=0 , mul=1 ,rem;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	while(n!=0)
	{
	      rem=n%10;
	      sum+=rem;
	      mul*=rem;
	      n/=10;

	}

	if(sum==mul)
		printf("This is a magic number\n",n);
	else
		printf("This is not a magic number\n",n);

	getch();
}