#include<stdio.h>
#include<conio.h>
main()
{
	int r;
	float pi,area;
	clrscr();
	printf("Enter the value of r: ");
	scanf("%d",&r);
	printf("Enter the value of pi: ");
	scanf("%f",&pi);

       //	printf("\nPI\t:%f",pi);
       //	printf("\nR\t:%d\n",r);
	area = pi*r*r;
	printf("\nArea of circle:%f",area,r);
	getch();
}