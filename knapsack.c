#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,n,k,i,j,p;
    scanf("%d",&t);  
    while(t--)
        {
        scanf("%d %d",&n,&k);
        int a[n],dp[2001]={0};
        
        for(i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
            dp[a[i]]=1;
        }
        
        for(i=1;i<=k;i++)
            for(j=0;j<n;j++)
                if(i-a[j]>0)
                    if(dp[i-a[j]]==1)
                      dp[i]=1;
           for(i=k;i>=1;i--)
               if(dp[i]==1)
                  break;
            printf("%d\n",i);
    }
    
    return 0;
}