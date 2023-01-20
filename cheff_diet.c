#include <stdio.h>
 
int main(void) {

	int T,flag=0;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int s=0;
	    int n,m,a[100000];
	    scanf("%d%d",&n,&m);
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    
	    for (int j=0;j<n;j++)
	    {
	        s+=(a[j]-m);
            
            if(s<0)
            {
            	flag=0;
                printf("NO %d\n",j+1);
                break;
            }
    
            else 
            {
               flag=1;
	        }
	    }
	    
	    if(flag==1)
	    {
	        printf("YES\n");
	    }
	}
	
	return 0;
}
