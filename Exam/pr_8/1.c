#include<stdio.h>

int len(char *str)
{
    int length=0;

    while (*str!='\0')
    {
        length++;
        str++;
    }
    return length;
}

void main()
{
    char str[50];

    printf("Enter anu string : ");
    scanf("%[^\n]",&str);

    printf("Length is : %d\n",len(str));
}