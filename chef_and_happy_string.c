#include <stdio.h> 
#include <string.h>


int main() {
    int T; 
    char s[1000]; 
    char v[6] = "aeiou"; 
    int f= 0;
    scanf("%d", &T);
    while(T--){
        scanf("%s", &s);  
        for(int x= 0; x < 5; x++){
            for(int y= 0; y< 5; y++){ 
                for(int m = 0; m < 5; m++){
                    for(int i= 0; i < strlen(s); i++){
                       if(s[i] == v[y] && s[i+ 1] == v[x] && s[i+ 2] == v[m]){ 
                       f = 1; 
                        } 
                        else if( s[i+ 1] == v[m] && s[i] == v[x] && s[i + 2] == v[y]){ 
                            f = 1; 
                        } 
                        else if( s[i + 1] == v[y] && s[i] == v[m] && s[i + 2] == v[y]){ 
                            f= 1; 
                        }
                     
                   }
                   
               } 
            }
        } 
        if(f== 1){ 
            printf("Happy\n"); 
        } 
        else if (f== 0){  
        printf("Sad\n"); 
        } 
        f= 0;
    }   
	return 0;
}
