// printf the sum of this series 1-2+3-4+6...upto 'n' times

#include <stdio.h>
int main()
{
     int n;
     
    printf("Enter the number of");
    scanf("%d",&n);
    int sum =0;
    for(int i=1; i<=n; i++){
        if(i%2!=0) sum = sum + i;
        else sum = sum -i;
    }
    printf("the sum is : %d",sum);
    

return 0;
}