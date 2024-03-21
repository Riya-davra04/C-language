#include<stdio.h>

void divisible()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    if(n%3==0 && n%5==0)
    {
        printf("This given number is divisivle by both 3 & 5 .");
    }
    else
    {
        printf("This given number is not divisivle by both 3 & 5 .");
    }
}

void main()
{
    divisible();
}