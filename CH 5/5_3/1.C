#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,n3;
	clrscr();

	printf("Enter a value of the first value: ");
	scanf("%d",&n1);
	printf("Enter a value of the second value: ");
	scanf("%d",&n2);
	printf("Enter a value of the third value: ");
	scanf("%d",&n3);

	(n1<n2)
		?(n1<n3)?printf("The minimum value is: %d",n1):printf("The minimum value is: %d",n3)
		:(n2<n3)?printf("The minimum value is: %d",n2):printf("The minimum value is: %d",n3);
	getch();
}