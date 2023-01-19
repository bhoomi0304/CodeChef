#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x;
	    scanf("%d",&x);
	    if(x>30){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}

