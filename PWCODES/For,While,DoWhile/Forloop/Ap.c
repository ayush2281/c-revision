//display this AP - 1,3,5,9,11,13.....2n-1

#include <stdio.h>
int main()
{
     int n;
     printf("Enter the number :");
     scanf("%d",&n);
   for (int i = 1; i<=2*n-1; i=i+2){
    printf("%d ",i);
       
   }
return 0;
}