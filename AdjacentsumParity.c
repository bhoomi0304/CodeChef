#include <stdio.h>

int main(void) {
	
	int T;
	scanf("%d",&T);
	while(T--){
	    int n,count=0;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        if(a[i]==1){
	            count++;
	        }
	    }
	    if(count%2==0){
	        printf("YES\n");
	    }
	    else{
	        printf("No\n");
	    }
	    
	    
	}
	return 0;
}

