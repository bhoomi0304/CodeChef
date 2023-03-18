#include <stdio.h>

int main(void) {
// your code goes here
int T;
scanf("%d",&T);
while(T--){
   int x;
   scanf("%d",&x);
   if(x>=80){
       printf("YES\n");
   }
   else{
       printf("NO\n");
   }
}
return 0;
}
