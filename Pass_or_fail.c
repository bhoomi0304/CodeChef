#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){ 
	    int n,x,m;
	    scanf("%d%d%d",&n,&x,&m);
	    
	    int mark=(x*3+(-1*(n-x)));
	    if(mark>=m){
	        printf("pass\n");
	    }
	    else{
	        printf("Fail\n");
	    }
	
	    
	}
	return 0;
}
