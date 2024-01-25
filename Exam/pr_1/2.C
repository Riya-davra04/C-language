#include<stdio.h>
#include<conio.h>
main()
{
	float baseSalary,grossSalary;
	int hra=10,da=5,ta=8;
	clrscr();
	printf("Enter Base Salary: ");
	scanf("%f",&baseSalary);
	printf("Hra: %d\n",hra);
	printf("Da: %d\n",da);
	printf("Ta: %d\n",ta);
	grossSalary=baseSalary+(baseSalary*(hra+da+ta)/100);
	printf("Gross Salary : %.2f",grossSalary);
	getch();
}