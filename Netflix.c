#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){int a,b,c,x;
	scanf("%d%d%d%d",&a,&b,&c,&x);
	if(a+b>=x ||b+c>=x ||a+c>=x){
	    printf("YES\n");
	}else{
	    printf("No\n");
	}
	    
	}
	return 0;
}

