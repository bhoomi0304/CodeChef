#include <stdio.h>

int main(void) {
// your code goes here

   int num;
   scanf("%d",&num);
   if(num%4==0){
       printf("%d",num+=1);
   }else{
       printf("%d",num-=1);
   }

return 0;
}
