#include <stdio.h>
int main()
{
  int n;
  printf("Enter thr number");
  scanf("%d",&n);

  int a;
  for(int i=1;i<=n;i++){
    a=n-i+1;
    for(int j=1;j<=a;j++){
        printf("%d ",j);
    }
  printf("\n");
  }
return 0;
}