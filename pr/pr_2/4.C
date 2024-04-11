#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();

	printf("M.Monday\n");
	printf("T.Tuesday\n");
	printf("W.Wednesday\n");
	printf("t.Thursday\n");
	printf("F.Friday\n");
	printf("s.Saturday\n");
	printf("S.Sunday\n");

	printf("Enter any character: ");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'M':
			printf("Monday");
			break;

		case 'T':
			printf("Tuesday");
			break;

		case 'W':
			printf("Wednesday");
			break;

		case 't':
			printf("Thursday");
			break;

		case 'F':
			printf("Friday");
			break;

		case 's':
			printf("Saturday");
			break;

		case 'S':
			printf("Sunday\n");
			break;

		default:
			printf("Invalid character.....");

	}
	getch();
}
