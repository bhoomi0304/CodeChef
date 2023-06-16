#include <stdio.h>

int main(void) {
	
	int T;
	scanf("%d",&T);
	while(T--){
	    int x,y,a;
	    scanf("%d%d%d",&x,&y,&a);
	    if(x<=a&&a<y){
	        printf("YES\n");
	    }
	    else
	        printf("NO\n");
	}
	return 0;
}

