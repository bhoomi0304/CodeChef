#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int x;
	    scanf("%d",&x);
	    (x<35)?printf("underload\n"):(x>65)?printf("overload\n"):printf("Normal\n");
	    
	}
	return 0;
}

