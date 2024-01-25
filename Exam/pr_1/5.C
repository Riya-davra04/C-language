#include<stdio.h>
#include<conio.h>
main()
{
	int num = 0;
	clrscr();
	printf("Enter any number: ");
	scanf("%d",&num);

	printf("%d * 1 =%d\n%d * 2 =%d\n%d * 3 =%d\n%d * 4 =%d\n%d * 5 =%d\n%d * 6 =%d\n%d * 7 =%d\n%d * 8 =%d\n%d * 9 =%d\n%d * 10 =%d",num, num * 1,num, num * 2,num, num * 3,num, num * 4,num, num * 5,num, num * 6,num, num * 7,num, num * 8,num, num * 9,num, num * 10);

	getch();
}