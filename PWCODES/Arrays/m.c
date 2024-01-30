#include<stdio.h>
int main()
{
    int m,n,sum =0;
    int a[3][4] , b[4][2] , c[3][2];
    printf("Enter the number of rows frst matrix");
    for(int i=0; i<3; i++){
        for(j=0;j<4;j++){
            printf("Enter the %d %d element of first matrix\n",i,j);
            scanf("%d",&a[i][j]);
        }

    }
return 0;
}