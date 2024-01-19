#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter the value of a\t: ");
	scanf("%d", &a);
	printf("Enter the value of b\t: ");
	scanf("%d", &b);

	printf("\n");
	printf("Addition of %d and %d        : %d\n",a,b,a+b);
	printf("Subtraction of %d and %d     : %d\n",a,b,a-b);
	printf("Multiplication of %d and %d  : %d\n",a,b,a*b);
	printf("Division of %d and %d        : %d\n",a,b,a/b);
	printf("Modules of %d and %d         : %d\n",a,b,a%b);

	getch();
}