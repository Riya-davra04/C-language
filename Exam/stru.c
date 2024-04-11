#include<stdio.h>

struct Student
{
	int room;
	int year;
	char city[50];
};

void main()
{
	int n;
	struct Student s[n];
	
	
	printf("Enter a student : ");
	scanf("%d",&n);
	
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Room Quantity : ");
		scanf("%d",&s[i].room);
		
		printf("Year : ");
		scanf("%d",&s[i].year);
		
		fflush(stdin);
		printf("City : ");
		scanf("%[^\n]",&s[i].city);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("Room Quantity : %d\n",s[i].room);
		printf("Year : %d\n",s[i].year);
		printf("City : %s\n",s[i].city);
	}
	
}
