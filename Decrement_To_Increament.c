#include <stdio.h>

int main(void) {

   int num;
   scanf("%d",&num);
   if(num%4==0){
       printf("%d",num+=1);
   }else{
       printf("%d",num-=1);
   }

return 0;
}
