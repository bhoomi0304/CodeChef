#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){int n,x,y;
	scanf("%d%d%d",&n,&x,&y);
	int temp=x-y;
	if(n<=temp){
	    printf("YES\n");
	}else{
	    printf("No\n");
	}
	    
	}
	return 0;
}

