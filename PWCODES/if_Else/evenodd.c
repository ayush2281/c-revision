// take positive integer input and tell if it is even No
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number");
  scanf("%d",&n);

  if(n%2==0){
    printf("Even number");
  }
  if(n%2!=0){
    printf("odd number");
  
  }

return 0;
}