#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();

	printf("Enter any Character: ");
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	{
		printf("This is Alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("This is digit");
	}
	else
	{
		printf("This is special character");
	}
	getch();

}