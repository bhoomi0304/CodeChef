#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int a,b,sum=0;
	    scanf("%d%d",&a,&b);
	    for(int i=0;i<a;i++){
	        for(int x=0;x<=b;x++){
	            sum+=x;
	            
	        }
	        b=sum;
	        sum=0;
	        
	    }
	    printf("%d\n",b);
	    
	}
	return 0;
}

