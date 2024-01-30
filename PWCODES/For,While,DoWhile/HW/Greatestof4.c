#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("enter the first number\n");
    scanf("%d", &a);

    printf("enter the second number\n");
    scanf("%d", &b);

    printf("enter the third number\n");
    scanf("%d", &c);

    printf("enter the fourth number\n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("a is greater");
    }

    if (b > a && b > c && b > d)
    {
        printf("b is greater");
    }

    if (c > a && c > b && c > d)
    {
        printf("c is greater");
    }

    else if (d > a && d > b && d > c)
    {
        printf("d is greater");
    }

    return 0;
}