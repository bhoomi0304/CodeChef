#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int m,n,x,v;
	    scanf("%d%d%d",&m,&n,&x);
	    v=(2*m + 2*n);
	    printf("%d\n",v*x);
	}
	return 0;
}

