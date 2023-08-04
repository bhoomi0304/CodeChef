#include <stdio.h>

int main(void) {
	
	int T;
	scanf("%d",&T);
	while(T--){
	    int n;
	    scanf("%d",&n);
	    if(n%7==0 && n%2==0){
	        printf("Alice\n");
	    }
	    else if(n%9==0 && n%2==1){
	        printf("Bob\n");
	    }
	    else{
	        printf("Charlie\n");
	    }
	}
	return 0;
}

