#include <stdio.h>
int main()
{
    
    int n;  // itani bar loop chalega
     printf("Enter the number :");
     scanf("%d",&n);
     // display this AP - 4,7,10,13,16 upto n num of terms
     // We are going to use extra varaiables
   int a= 4;
   for (int i = 1; i<=n; i++){
    printf("%d ",a);
    a=a+2;
   }
   
return 0;
}