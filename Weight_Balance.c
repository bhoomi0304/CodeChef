#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int w1,w2,x1,x2,M;
	    scanf("%d %d %d %d %d ",&w1,&w2,&x1,&x2,&M);
	    if(((w2-w1)<(x1*M))||((w2-w1)>(x2*M)))
	        printf("0\n");
	    else
	        printf("1\n");
	}
	return 0;
}

