#include <stdio.h>
int main()
{
   // display this GP - 100,50,25 upto n terms
   float n;
   printf("Enter the number ");
   scanf("%f\n", &n);

   float a = 100;
   for(int i=1; i<=n; i++){
    printf("%.1f\n",a);
    a = a/2;

   }
return 0;
}