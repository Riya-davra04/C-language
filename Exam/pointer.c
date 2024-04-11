#include<stdio.h>

int square(int *arr , int size)
{
	int i;
	
	for(i=0;i<size;i++)
	{
		*(arr +i) = (*(arr + i ) * *(arr + i));
	}
}

main()
{
	int size;
	
	printf("Enter a array size : ");
	scanf("%d",&size);
	int i;
	int arr[size];
	for(i=0;i<size;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	square(&arr[0],size);
	
	for(i=0;i<size;i++)
	{
		
		printf("Array[%d] : %d\n",i,arr[i]);
	}
	
	
}
