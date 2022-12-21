#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n,xs;
	    scanf("%d%d",&n,&xs);
	    int a[n],b[n];
	    int sums=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&b[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>=xs){
	            sums+=b[i];
	        }
	    }
	    printf("%d\n",sums);
	}
    
	return 0;
}

