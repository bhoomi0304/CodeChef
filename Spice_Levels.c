#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int levels;
	    scanf("%d",&levels);
	    (levels>=7)?printf("HOT\n"):(levels>=4 && levels<7)?printf("MEDIUM\n"):printf("MILD\n");
	}
    
	return 0;
}

