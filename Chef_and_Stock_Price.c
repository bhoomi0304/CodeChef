#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    
	    float a;
	    int b,c,d;
	    scanf("%f %d %d %d",&a,&b,&c,&d);
	    if(d<0){
	        d=d*-1;
	        a=a-((a/100)*d);
	        if(a>=b&&a<=c){
	            printf("Yes\n");
	        }
	        else{
	            printf("No\n");
	        }
	    }
	    else{
	        a=a+((a/100)*d);
	        if(a>=b&&a<=c){
	            printf("Yes\n");
	        }
	        else{
	            printf("No\n");
	        }
	    }
	}
	return 0;
}

