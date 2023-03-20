#include <stdio.h>

int main(void) {
// your code goes here
int T;
scanf("%d",&T);
while(T--)
{
   int m,n,srt=0;
   scanf("%d%d",&m,&n);
   while(m!=n)
   {
       if(m>n)
       {
         m= m/2;
       }
       else
       {
           n=n/2;
       }
       srt++;
       
   }
   printf("%d\n",srt);

}
return 0;
}
