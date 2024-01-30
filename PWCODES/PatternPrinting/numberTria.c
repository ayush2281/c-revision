#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter the number you want to print triangle");
    scanf("%d", &n);    


    for (int i = 1; i <= n; i++)
    {
        a=n-1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
    printf("\n");
    }

    return 0;
}