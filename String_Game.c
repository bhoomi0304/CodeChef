#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int freq[26]={0};
	    int n;
	    int flag=0;
	    scanf("%d",&n);
	    char str[n];
	    scanf("%s",str);
	    for(int i=0;i<n;i++){
	        freq[str[i]-'a']++;
	    }
	    for(int i=0;i<26;i++){
	        if(freq[i]%2!=0){
	            flag=1;
	            printf("NO\n");
	            break;
	        }
	    }
	    if(flag==0){
	        printf("YES\n");
	    }
	    
	}
	return 0;
}

