#include<stdio.h>


main()
{
	int n , first , last ,sum;
	

	printf("Enter any number: ");
	scanf("%d",&n);

	last = n%10;

	while(n>=10)
	{
		n/=10;

	}

	first =n;
	printf("Sum : %d\n",first + last);

	
}