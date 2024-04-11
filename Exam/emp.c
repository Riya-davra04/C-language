#include<stdio.h>

struct emp
{
	char name[50];
	char role[50];	
};

void main()
{
	FILE *file = fopen("data.txt","w");
	
	if(file==NULL)
	{
		printf("File is not open");
	}
	int n;
	struct emp e[60];
	
	
	printf("Enter a emp : ");
	scanf("%d",&n);
	
	int i;
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Emp Name : ");
		scanf("%[^\n]",&e[i].name);
		fflush(stdin);
		printf("Emp Role : ");
		scanf("%[^\n]",&e[i].role);
		fflush(stdin);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		fprintf(file,"Emp Name : %s\n",e[i].name);
		fprintf(file,"Emp Role : %s\n",e[i].role);
	}
	
	fclose(file);
	
	printf("File is open ");
	
}
