#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int a,b,c,d,i,j,count=0;
       scanf("%d %d %d %d",&a,&b,&c,&d);
       for(i=a;i<=b;i++)
       {
           for(j=c;j<=d;j++)
           {
              if(i==j)
              {
                  count++;
              }
           }
       }
       printf("%d\n",(b-a)+(d-c)+2-count);
    }
	
	return 0;
}



