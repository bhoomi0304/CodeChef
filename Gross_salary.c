#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	   float n,p,s;
	    scanf("%f",&n);
	    p=n*0.9;
	    s=n*0.98;
	    if(n<1500){
	        printf("%0.2f\n",n+n/10+p);
	    }
	    else{
	        printf("%0.2f\n",n+500+s);
	    }
	    
	}
	return 0;
}
