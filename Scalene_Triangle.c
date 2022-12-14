#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
	    if(x!=y&&x!=z&&y!=z)
	        printf("YES\n");
	   else
	    printf("NO\n");
	    
	}
	return 0;
}

