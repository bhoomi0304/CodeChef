#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x,y,i;
	    scanf("%d%d%d",&n,&x,&y);
	    char str[1000];
	    scanf("%s",str);
	    for(i=0;i<n;i++)
	    {
	        if(str[0]==str[i])
	        continue;
	        else
	        break;
	    }
	    if(i==n)
	    printf("0\n");
	    else if(i!=n)
	    {
	        if(x>=y)
	        printf("%d\n",y);
	        else
	        printf("%d\n",x);
	    }
	}
	return 0;
}

