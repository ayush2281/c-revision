#include <stdio.h>
int main()
{
 int n,m;
  printf("Enter the number as you want to print");
  scanf("%d",&n);
  int a;

  for(int i =1;i<=n;i++){
    a =n-i;
    for(int j =1;j<=a;j++){
      
        printf("*");      
    }
    printf("\n");  
  }

   
  
return 0;
}