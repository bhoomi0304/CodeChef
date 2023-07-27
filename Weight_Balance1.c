#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int w1,w2,x1,x2,m,dif,max,min;
	    scanf("%d %d %d %d %d",&w1,&w2,&x1,&x2,&m);
	    dif=w2-w1;
	    max=x2*m;
	    min=x1*m;
	    if(dif>=min && dif<=max)
	    {
	        printf("%d\n",1);
	    }
	    else{
	        printf("%d\n",0);
	    }
	}
	return 0;
}

