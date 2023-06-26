#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int z,x,a,b,c;
	    scanf("%d%d%d%d%d",&z,&x,&a,&b,&c);
	    ((a+b+c)<=(z-x))?printf("YES\n"):printf("NO\n");
	}
	return 0;
}

