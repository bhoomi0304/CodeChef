#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int a,b;
	    scanf("%d%d",&a,&b);
	    (a*1.07)>=b?printf("YES\n"):printf("NO\n");
	    
	}
	return 0;
}

