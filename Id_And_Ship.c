#include <stdio.h>

int main(void) {
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    char a[100];
	    char s[]="BbCcDdFf";
	    scanf("%s",a);
	    if(a[0]==s[0] || a[0]==s[1]){
	        printf("BattleShip\n");
	    }
	    else if(a[0]==s[2] || a[0]==s[3]){
	        printf("Cruiser\n");
	    }
	    else if(a[0]==s[4] || a[0]==s[5]){
	        printf("Destroyer\n");
	    }
	    else{
	        printf("Frigate\n");
	    }
	}
	return 0;
}

