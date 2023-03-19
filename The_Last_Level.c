#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z,sum=0,a,b;
	    scanf("%d%d%d",&x,&y,&z);
	    if(x<=3){
	        sum=x*y;
	    }else{
	        b=x%3;
	        a=x/3;
	        if(b!=0){
	            sum=(b*y)+(a*3*y)+(a*z);
	        }else{
	            sum=(a*3*y)+((a-1)*z);
	        }
	    }
	     printf("%d\n",sum);
	     
	}
	return 0;
}
