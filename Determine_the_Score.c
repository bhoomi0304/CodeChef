#include <stdio.h>

int main(void) {
	
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x,n;
	    scanf("%d%d",&x,&n);
	    printf("%d\n",(x/10)*n);
	}
    
	return 0;
}

