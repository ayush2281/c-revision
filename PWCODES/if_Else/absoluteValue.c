#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);

    if(n<0){ // n is negative
        n = n * (-1);
    }
    printf("the absolute value is : %d",n);
return 0;
}