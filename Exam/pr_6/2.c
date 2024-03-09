#include<stdio.h>


main()
{
     char name[20] ;

    printf("Enter any String: ");
    scanf("%[^\n]",&name);

    int l=0,i,j,count;

   for(i=0;name[i]!='\0';i++){
        l++;
    }
    
    for(i=0;i<l;i++)
    {
     count=1;
       if(name[i]!='\0')
       {
        for(j=i+1;j<l;j++)
        {
            if(name[i]==name[j])
            {
            count++;
            name[j]='\0';
            }
        }
        printf("%c => %d\n",name[i],count);
       }   
       
    }
    
}