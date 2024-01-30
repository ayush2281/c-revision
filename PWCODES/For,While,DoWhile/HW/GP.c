#include <stdio.h>
int main()
{
  //display this GP - 3,12,48,... upto 'n' terms
  int n;
  printf("Enter the number of");
  scanf("%d", &n);

  int a=3;
  for(int i=1;i<=n;i++){
    printf("%d\n",a);
    a = a*4;
  }

return 0;
}