#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int n,small,index;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d\n",&a[i]);
	    }
	    index=a[0],small=0;
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]<index){
	            index=a[i];
	            small=i;
	        }
	            
	    }
	    printf("%d\n",small+1);
	  
	    
	}
	return 0;
}

