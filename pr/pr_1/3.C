#include<stdio.h>
#include<conio.h>
main()
{
	int fAngle,sAngle,tAngle;
	clrscr();
	printf("Enter first angle: ");
	scanf("%d",&fAngle);
	printf("Enter second angle: ");
	scanf("%d",&sAngle);

	tAngle=180-(fAngle+sAngle);

	printf("Third angle: %d",tAngle);
	getch();
}