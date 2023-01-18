#include <stdio.h>

int main(void) {
// your code goes here
int r,n;
scanf("%d",&r);
if(r>=0 && r<=50)
{
   n=100;
   printf("%d",n);
}

else if(r>=51 && r<=100)
{
   n=50;
   printf("%d",n);
}

else
{
   n=0;
   printf("%d",n);
}

return 0;
}
