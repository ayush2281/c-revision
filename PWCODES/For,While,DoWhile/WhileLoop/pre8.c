#include <stdio.h>
int main()
{
    int i;
    while(i=10){
    printf("%d\n",i);  // infinite loop
    i =i+1;
}

return 0;
}