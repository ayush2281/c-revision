#include <stdio.h>
int main()
{

    int n;  // itani bar loop chalega
     printf("Enter the number :");
     scanf("%d",&n);
     // display this GP - 1,2,4,8,16,32 upto n num of terms
     // We are going to use extra varaiables
   int a= 1;
   for (int i = 1; i<=n; i++){
    printf("%d ",a);
    a=a*2;
   }

return 0;
}