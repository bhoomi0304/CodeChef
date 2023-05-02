#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    (y >= x*3)?printf("YES\n"):printf("NO\n");
	    
	}
	return 0;
}

