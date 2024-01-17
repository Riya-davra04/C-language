#include<stdio.h>
#include<conio.h>
main()
{
	int l,w,area;
	clrscr();
	printf("Enter the value of length: ");
	scanf("%d",&l);
	printf("Enter the value of width: ");
	scanf("%d",&w);
	area=l*w;
	printf("\narea of reactangle is\t:%d",area);
	getch();
}