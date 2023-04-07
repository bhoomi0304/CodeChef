#include <stdio.h>
int main(void) {
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	       { scanf("%d",&a[i]);}
	    for(i=0;i<n;i++)
	        {scanf("%d",&b[i]);}
	    int c=0;
	    for(i=0;i<n;i++)
	    {
	        if((a[0]>=b[0])&&i==0)
	        {
	            c++;
	        }
	        if(((a[i]-a[i-1])>=b[i])&&i!=0)
	        {    
	            c++;
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}

