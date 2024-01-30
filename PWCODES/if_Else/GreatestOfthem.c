#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("enter the first number\n");
    scanf("%d", &a);

    printf("enter the second number\n");
    scanf("%d", &b);

    printf("enter the third number\n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is greater");
    }

    if (b > a && b > c)
    {
        printf("b is greater");
    }

    else if (c > a && c > b)
    {
        printf("c is greater");
    }

    return 0;
}