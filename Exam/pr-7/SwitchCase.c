#include <stdio.h>

int addition(int a, int b)
{
    printf("Addition of %d and %d : %d\n\n", a, b, a + b);
}

int subtraction(int a, int b)
{
    printf("Subtraction of %d and %d : %d\n\n", a, b, a - b);
}

int multiplication(int a, int b)
{
    printf("Multiplication of %d and %d : %d\n", a, b, a * b);
}

int division(int a, int b)
{
    if (b != 0)
    {
        printf("Division of %d and %d : %d\n\n", a, b, a / b);
    }
    else
    {
        printf("Can not divied by zero!\n\n");
    }
}

int modulus(int a, int b)
{
    printf("Modulus of %d and %d : %d\n\n", a, b, a % b);
}

void main()
{
    int n1, n2, ch;

    do
    {
        printf("Press 1 for Addition : \n");
        printf("Press 2 for Subtraction : \n");
        printf("Press 3 for Multiplication : \n");
        printf("Press 4 for Division : \n");
        printf("Press 5 for Modulus  : \n");
        printf("Press 0 for Exit : \n");

        printf("Enter Your Choice : ");
        scanf("%d", &ch);

        if (ch == 0)
        {
            break;
        }

        printf("Enter the First Number : ");
        scanf("%d", &n1);

        printf("Enter the Second Number : ");
        scanf("%d", &n2);

        switch (ch)
        {

        case 1:
            addition(n1, n2);
            break;

        case 2:
            subtraction(n1, n2);
            break;

        case 3:
            multiplication(n1, n2);
            break;

        case 4:
            division(n1, n2);
            break;

        case 5:
            modulus(n1, n2);
            break;

        default:
        {
            printf("Invaild Choice!");
        }
        }
    } while (ch != 0);
}