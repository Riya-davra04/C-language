#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();
	printf("Enter any character: ");
	scanf("%c",&ch);

	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
	   printf("This is vowel");
	}
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	   printf("This is vowel");
	}
	else
	{
	  printf("This is consonant");
	}
	getch();
}