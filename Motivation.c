#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,x,s,r;
        scanf("%d %d",&n,&x);
        int b=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d %d",&s,&r);
            if(s<=x)
            {
                if(r>b)
                {
                    b=r;
                }
            }
        }
        printf("%d\n",b);
	}
	return 0;
}

