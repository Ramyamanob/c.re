# c.re
#include<stdio.h>
int main()
{
    int n,q,i,j;
    scanf("%d\n%d",&n,&q);
    for(i=n;i<q;i++)
    {
        int count=0;
        //m=i;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
            count=count+1;
            }
        }
        if(count==2)
        {
            //printf("KJlllll");
            printf("%d ",i);
        }
    
    }
    return 0;
}
