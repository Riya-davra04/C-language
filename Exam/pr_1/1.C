#include<stdio.h>
#include<conio.h>
main()
{
	float c,f;
	clrscr();
	printf("Enter the temperature in Celsius: ");
	scanf("%f",&c);

	f=(c*9/5)+32;

	printf("The temperature in Fehrenheit: %.2f",f);
	getch();
}