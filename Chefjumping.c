#include <stdio.h>

int main(void) {

	    long long int x;
	    scanf("%lld",&x);
	    if(x%6==0 || x%6==1 || x%6==3){
	        printf("\nyes");
	    }
	    else
	    {
	        printf("\nno");
	    }
	
	return 0;
}

