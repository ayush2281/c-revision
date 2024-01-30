#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of table you want to print");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        printf("%dX%d=%d",i,n,i*n);
    }
    return 0;
}