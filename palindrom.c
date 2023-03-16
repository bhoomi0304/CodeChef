#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int x,m=0,temp=0;
	    x=n;
	    while(n!=0)
	    {
	        temp=n%10;
	        m=m*10+temp;
	        n=n/10;
	    }
	    if(x == m)
	    printf("wins\n");
	    else
	    printf("loses\n");
	}
	return 0;
}

