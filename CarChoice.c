#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        float x1,x2,y1,y2;
        scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
        if((y1/x1)>(y2/x2))
        {
            printf("1 \n");
        }
        else if((y1/x1)==(y2/x2))
        {
            printf("0 \n");
        }
        else
        printf("-1 \n");
        t--;
    }
	// your code goes here
	return 0;
}

