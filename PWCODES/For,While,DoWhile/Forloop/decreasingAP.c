//display this AP - 100,97,94.... upto all terms are possible   

#include <stdio.h>
int main()
{
    //  int n;  
    //  printf("Enter the number :");
    //  scanf("%d",&n);

    printf("these are positive decreasing number\n");
    
   int a= 100;
   for (int i = 1; a>0; i++){
    printf("%d ",a);
    a=a-3;
   }
return 0;
}