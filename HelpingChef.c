#include <stdio.h>

int main(void) {
// your code goes here
int T;
scanf("%d",&T);
while(T--){
   int n;
   scanf("%d",&n);
   if(n<10){
       printf("Thanks for helping Chef!\n");
   }
   else{
       printf("-1\n");
   }
}
return 0;
}
