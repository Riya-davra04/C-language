#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter a value of a: ");
	scanf("%d",&a);
	printf("Enter a value of b: ");
	scanf("%d",&b);
	printf("Enter a value of c: ");
	scanf("%d",&c);
	printf("Enter a value of d: ");
	scanf("%d",&d);

	if(a>b)
	{
	   if(a>c)
	   {
	     if(a>d)
	     {
		 printf("A is maximum");
	     }
	     else
	     {
		 printf("D is maximum");
	     }
	   }
	   else
	   {
	     if(c>d)
	     {
		 printf("C is maximum");
	     }
	     else
	     {
		 printf("D is maximum");
	     }
	   }
	}
	else
	{
	   if(b>c)
	   {
	     if(b>d)
	     {
		printf("B is maximum");
	     }
	     else
	     {
		printf("D is maximum");
	     }
	   }
	   else
	   {
	     if(c>d)
	     {
		 printf("C is maximum");
	     }
	     else
	     {
		  printf("D is maximum");
	     }
	   }
	}

	getch();

}