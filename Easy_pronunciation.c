#include <stdio.h>

int main(void) {
// your code goes here
int T;
scanf("%d",&T);
while(T--){
   int n,flag=0,count=0;
   scanf("%d",&n);
   char s[n];
   scanf("%s",s);
   for(int i=0;i<n;i++){
       char c=s[i];
       if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
       {
           count=0;
           flag=0;
       }
       else{
           count++;
           
           if(count>=4){
               flag=1;
               break;
           }else{
               flag=0;
           }
       }
       
   }
   if(flag==0){
       printf("YES\n");
   }else{
       printf("no\n");
   }
}
return 0;
}
