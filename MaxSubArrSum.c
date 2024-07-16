#include<stdio.h>
#include<limits.h>
int main() {
    int q;
    scanf("%d",&q);
    int ind=0;
    int num[q],k[q];
    int a[q][100];
    while(ind<q) {
        scanf("%d %d",&num[ind],&k[ind]);
        
        for(int i=0; i<num[ind]; i++) {
            scanf("%d",&a[ind][i]);
        }
        ind++;
    }
    for(int m=0; m<q; m++) {
        int n=num[m];
        int count =0;
        int sum=0;
        int j;
        int i,b,max=INT_MIN;
        for(b=-1; b<n-count-1; b++) {
            for( i=b,j=0; j<count; i++,j++) {
                sum+=a[m][i];
            }
            for(int l=i+1; l<n; l++) {
                sum+=a[m][l];

                if(sum%k[m]>max) {
                    max=sum%k[m];
                }
            }
            count++;
        }

        printf("%d\n",max);
    }

return 0;
}




