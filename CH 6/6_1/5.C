#include<stdio.h>
#include<conio.h>
main()
{
	int syear ,eyear;
	clrscr();

	printf("Enter the Start Year: ");
	scanf("%d",&syear);
	printf("Enter the End Year: ");
	scanf("%d",&eyear);

	while(syear<=eyear)
	{
		if(syear%4==0)
		printf("This year is leap year : %d\n",syear);
		syear++;
	}
	getch();
}