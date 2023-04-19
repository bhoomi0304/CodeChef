#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>c || b>d)
	    printf("IMPOSSIBLE\n");
	else
	    printf("POSSIBLE\n");
	    
	}
	return 0;
}

