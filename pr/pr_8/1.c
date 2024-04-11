#include<stdio.h>

int len(char *str)
{
    int length=0;

    // while (*str!='\0')
    // {
    //     length++;
    //     str++;
    // }

    for(int i = 0 ; str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char str[50];

    printf("Enter anu string : ");
    scanf("%[^\n]",&str);

    int length=len(str);

    printf("Length is : %d\n",length);

    return 0;
}