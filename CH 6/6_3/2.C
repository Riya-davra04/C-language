#include<stdio.h>
#include<conio.h>
main()
{
	int n,a,result=1;
	clrscr();

	printf("Enter First Number: ");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	{
		result=result*a;

	}

		printf("Multiplication : %d\n",result);

	getch();


}
