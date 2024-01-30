#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want to print triangle");
    scanf("%d", &n);

   
        int a=1;
        for (int i=1;i<=n;i++){
            for(int j=1;j<=2*n-1;j=j+2){
               printf("%d ",  j);
                a =a +2;
            }
        
        printf("\n"); 
        }
  

    

    return 0;
}