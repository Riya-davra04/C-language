#include<stdio.h>
#include<conio.h>

main()
{
	int n = 1 , i;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("%d , ",n);
		n= n * 10 + 1;
	}

	getch();
}