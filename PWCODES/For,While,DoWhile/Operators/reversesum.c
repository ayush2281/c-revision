// Wap to print the sum of the given number and its reverse
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of");
    scanf("%d", &n);

    int r = 0;
    int sum = 0;

    while (n > 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
        sum = r + n;
    }

    printf("the numbers of reverse digits are %d %d", r, sum);

    return 0;
}