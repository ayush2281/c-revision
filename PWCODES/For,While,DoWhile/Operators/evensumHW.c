// wap to print sum of all the even digits of a given number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of");
    scanf("%d", &n);

    int sum = 0;
    int even = 0;
    while (n != 0)
    {
        even = n % 10;

        if (n % 2 == 0)

            sum = sum + even;
        n = n / 10;
    }
    printf("the sum of digits are %d", sum);

    return 0;
}