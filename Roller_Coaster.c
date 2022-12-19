#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    (x>=y)?printf("YES\n"):printf("NO\n");
	}
    
	return 0;
}

