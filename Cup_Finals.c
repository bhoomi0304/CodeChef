#include <stdio.h>

int main(void) {
	
	int T,a,b,D;
	scanf("%d",&T);
	while(T--){
	    scanf("%d%d%d",&a,&b,&D);
	    if(abs(a-b)<=D)
	    {
	        printf("YES\n");
	        
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

