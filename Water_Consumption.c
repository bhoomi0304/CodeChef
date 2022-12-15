#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int x;
	    scanf("%d",&x);
	    if(x>=2000)
	        printf("YES\n");
	    else
	        printf("No\n");
	}
	return 0;
}

