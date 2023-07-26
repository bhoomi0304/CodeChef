#include <stdio.h>

int main(void) {
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int cost;
	    scanf("%d",&cost);
	    (cost*4>1000)?printf("NO\n"):printf("YES\n");
	}
	return 0;
}
