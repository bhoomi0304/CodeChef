#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,y=0,in=0,no=0;
	    scanf("%d",&n);
	    char a[n];
	    scanf("%s",a);
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]=='Y')
	        {
	            y++;
	        }
	        else if(a[i]=='I')
	        {
	            in++;
	        }
	    }
	    if(in!=0)
	    {
	        printf("INDIAN\n");
	    }
	    else if(in==0 && y!=0)
	    {
	        printf("NOT INDIAN\n");
	    }
	    else if(in+y==0)
	    {
	        printf("NOT SURE\n");
	    }
	}
	return 0;
}
