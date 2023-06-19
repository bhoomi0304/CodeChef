#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int n,flag=0;
	    int freq[10]={0};
	    scanf("%d",&n);
	    int arr[n*2];
	    for(int i=0;i<2*n;i++){
	        scanf("%d",&arr[i]);
	        freq[arr[i]]++;
	    }
	    for(int i=0;i<2*n;i++){
	        int count=0;
	       for(int j=i+1;j<2*n;j++){
	           if(arr[i]==arr[j]){
	               count++;
	           }
	       }
	       if(count>1){
	           flag=1;
	           break;
	       }
	    }
	    if(flag==1){
	        printf("No\n");
	    }
	    else{
	        printf("Yes\n");
	    }
	    
	}
	return 0;
}

