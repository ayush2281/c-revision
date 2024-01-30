// wap to print sum of all the odd digits of a given number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of");
    scanf("%d", &n);

    int sum = 0;
    int odd = 0;
    while (n != 0)
    {
        odd = n % 10;

        if (n%2!=0)

            sum = sum + odd;
        n = n / 10;
    }
    printf("the sum of digits are %d", sum);

    return 0;
}