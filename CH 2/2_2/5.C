#include<stdio.h>
#include<conio.h>
main()
{
	float pi,r,perimeter;
	clrscr();
	printf("Enter the value of pi: ");
	scanf("%f",&pi);
	printf("Enter the value of r: ");
	scanf("%f",&r);
	perimeter=2*pi*r;
	printf("\nPerimeter of the circle\t:%f",perimeter);

	getch();
}