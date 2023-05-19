#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {int a;
     scanf("%d",&a);
     int c[2*a];
     
     for(int i=0; i<2*a; i++)
      scanf("%d",&c[i]);
      
      int m=0;
      
      for(int i=0; i<2*a; i++)
     {int n=0;
         for(int j=0; j<2*a; j++)
         if(c[i]==c[j])
         n++;
         if(n>m)
         m=n;}
         if(m>2)
         printf("NO\n");
         else
         printf("Yes\n");
   
    }
    
   
	return 0;
}

