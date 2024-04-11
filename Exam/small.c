#include<stdio.h>

main()
{
	int n,s;
	
	printf("Enter a array : ");
	scanf("%d",&n);
	
	int a[n];
	
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Array[%d] : %d\n",i,a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		s=a[i]<n;
	printf("small : %d\t",s);
	}
	
}
