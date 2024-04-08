#include<stdio.h>

int main()
{
    FILE *s_file , *d_file;

    char f[30];

    s_file = fopen("read.txt","r");
    d_file = fopen("write.txt","w");

    while(fgets(f,30,s_file) != NULL)
    {
        fputs(f,d_file);
    }


    fclose(s_file);
    fclose(d_file);


    printf("File open successfully..\n");

    return 0;
}