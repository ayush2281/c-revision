#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number as you want print a table");
    scanf("%d", &n);

    for(int i =1; i<=10; i++){
        printf("%d X %d = %d\n", n, i,i*n);

    }
return 0;
}