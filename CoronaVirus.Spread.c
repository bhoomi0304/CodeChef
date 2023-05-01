#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, min=0, max=0, track=1, i;
	    scanf("%d", &n);
	    int arr[n], count[10]={0};
	    for (i=0; i<n; i++){
	        scanf("%d", &arr[i]);
	        if (i>0 && abs(arr[i]-arr[i-1])>2){
	            count[i]=2;
				track=0;
            }
	    }
        if (track==1){
    	    min=n;
    	    max=n;
    	}
		else{
			for(i=0; i<n; i++){
				if (count[i]==2){
					if (min==0 && max==0){
						min=i;
						max=i;
					}
					else{
						if (min>i-track){
							min=i-track;
						}
						if (max<i-track){
							max=i-track;
						}
					}
					track=i;
				}
				if(i==n-1){
					if (min>i-track+1){
							min=i-track+1;
						}
					if (max<i-track+1){
						max=i-track+1;
					}
				}
			}
		}
	    printf("%d %d\n", min, max);
	}
	return 0;
}
