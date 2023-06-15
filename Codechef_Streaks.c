#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int a ;
        scanf("%d",&a);
        int om[a],addy[a];
        for(int j=0;j<a;j++)
            scanf("%d",&om[j]);
        for(int j=0;j<a;j++)
            scanf("%d",&addy[j]);
        int os=0,as=0,counto=0,counta=0;
        for(int j=0;j<a;j++){
            if(om[j]>0){
                os++;
                 if(os>counto)
                    counto=os;
            }
            else
                os=0;
        }
        for(int j=0;j<a;j++){
            if(addy[j]>0){
                as++;
                if(as>counta)
                    counta=as;
            }
            else
                as=0;
        }
        if(counta>counto)
            printf("Addy\n");
        else if(counta<counto)
            printf("Om\n");
        else
            printf("Draw\n");
	}
	return 0;
}

