#include<stdio.h>
int main()
{
    int n;
  printf("Enter the number");
  scanf("%d",&n);

  if(n%5==0){
    printf("divisible by 5");
  }
  if(n%5!=0){
    printf("not divisible by 5");
  }

return 0;
}