#include <stdio.h>
int main()
{

    int n;
    printf("enter the number of");
    scanf("%d", &n);

    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {
            printf("given number is composite\n");
            break;
        }
    }
    if(a==0) printf("given number is prime");
    else printf("given number is composite");
    

    return 0;
}