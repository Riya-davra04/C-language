#include<stdio.h>
#include<conio.h>
main()
{
	int n,a=1,result=1;
	clrscr();

	printf("Enter First Number: ");
	scanf("%d",&n);

	while(a<=n)
	{
		result=result*a;
		a++;
	}

		printf("Multiplication : %d\n",result);

	getch();


}
