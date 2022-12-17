#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,n;
	    scanf("%d%d",&x,&n);
	    printf("%d\n",(x/10)*n);
	}
    
	return 0;
}

