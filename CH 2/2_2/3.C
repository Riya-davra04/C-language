#include<stdio.h>
#include<conio.h>
main()
{
	int b,h,area;

	clrscr();
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of h: ");
	scanf("%d",&h);
	area=0.5*b*h;
	printf("\nArea of triangle: %d",area);

	getch();
}