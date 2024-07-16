#include<stdio.h>
int main() {
    int m,n,row=0,col=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int b[m][n];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];

        }
    }
    int arr[][4]= {{-1,0},{1,0},{0,-1},{0,1}};
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(a[i][j]==1) {
                for( int k=0; k<4; k++) {
                    int x=i+arr[k][0];
                    int y=j+arr[k][1];
                    if(0<=x<m&&0<=y<n) {
                        b[x][y]=0;
                    }
                }
            }
        }
    }

for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
        printf("%d",b[i][j]);
    }
    printf("\n");
}
}




