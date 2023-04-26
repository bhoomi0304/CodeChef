#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int cost;
	    scanf("%d",&cost);
	    (cost*4>1000)?printf("NO\n"):printf("YES\n");
	}
	return 0;
}
