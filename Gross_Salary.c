#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){ int n;
	float gross;
	scanf("%d",&n);
	if(n<1500){
	    gross=(n)+(0.1)*n+(0.9)*n;
	    printf("%.2f\n",gross);
	}else{
	     gross=(n)+500+((0.98)*n);
	     printf("%.2f\n",gross);
	}
	    
	}
	return 0;
}

