#include<stdio.h>

int main()
{
    FILE *file;

    int i;

    file = fopen("number.txt","w");

    if(file==NULL)
    {
        printf("Not Open File.");
        return 1 ;
    }

    for(i=1;i<50;i++);
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            fprintf(file,"%d\n",i);
        }
    }


    // fclose(file);
    printf("Numbers written to file successfully.");


    return 0;
}