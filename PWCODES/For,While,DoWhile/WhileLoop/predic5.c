#include <stdio.h>
int main()
{
   int x = 4,y,z;
   y = --x; // pre incremented , x++ means use x then increment
   z = x--; // pre incremented , ++x means increment the use
   printf("%d%d%d\n",x,y,z) ; 
return 0;
}