#include<stdio.h>

int rev(int n[])
{
	int i ,l ;
	for(i=0;n[i]!='\0';i++)
	{
		l++;
	}
}

void main()
{
	int n;
	
	printf("Enter Digits : ");
	scanf("%d",&n);
	
	rev(n);
}
