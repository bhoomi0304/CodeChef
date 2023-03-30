#include <stdio.h>

int main(void) {
// your code goes here
int T;
scanf("%d",&T);
while(T--){
   int alice,bob;
   scanf("%d%d",&alice,&bob);
   if(alice>bob){
       printf("A\n");
   }else{
       printf("B\n");
   }
   
}
return 0;
}
