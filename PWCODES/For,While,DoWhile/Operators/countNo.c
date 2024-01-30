// WAP to count digits of a given number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number");
    scanf("%d", &n);

    int count = 0;
    while (n!= 0)
    {
        n = n / 10;
        count++;
    }
    printf("the no of digits are %d", count);

    return 0;
}