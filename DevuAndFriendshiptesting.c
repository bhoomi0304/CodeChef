#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    int count=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(arr[i]==arr[j]){
	                count++;
	                break;
	            }
	        }
	    }
	    printf("%d\n",n-count);
	    
	}
	return 0;
}

