#include<stdio.h>
int main() {
    int m,n,row=0,col=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(a[i][j]==1) {
                if(i==0) {
                    row=1;
                }
                if(j==0) {
                    col=1;
                }
                a[i][0]=1;
                a[0][j]=1;

            }
        }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(int i=m-1; i>=1; i--) {
        for(int j=n-1; j>=1; j--) {
            if(a[i][0]==1||a[0][j]==1) {
                a[i][j]=1;
            }
        }
    }
    if(row==1) {
        for(int j=0; j<n; j++) {
            a[0][j]=1;
        }
    }
    if(col==1) {
        for(int i=0; i<m; i++) {
            a[i][0]=1;
        }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}