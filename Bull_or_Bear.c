#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int X,Y;
	    scanf("%d%d",&X,&Y);
	    if(X==Y)
	        printf("NEUTRAL\n");
	    else if(X>Y)
	        printf("LOSS\n");
	    else
	        printf("PROFIT\n");
	}
	return 0;
}

