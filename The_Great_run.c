#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int n,k,i,max=0,sum,l;
	    scanf("%d%d",&n,&k);
	    int a[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<=n-k;i++){
	        sum=a[i];
	        
	        for(int j=i+1,l=0;l<k-1;j++,l++){
	            sum=sum+a[j];
	        }
	        if(sum>max){
	            max=sum;
	        }
	    }
	    printf("%d\n",max);
	    
	}
	return 0;
}

