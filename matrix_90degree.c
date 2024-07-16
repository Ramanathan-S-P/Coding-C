#include<stdio.h>
int main() {
    int m;
    scanf("%d",&m);
    int a[m][m];
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d",&a[i][j]);

        }
    }
    for(int i=0; i<m; i++) {
        for(int j=i+1; j<m; j++) {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0; i<m/2;i++){
    for(int j=0;j<m;j++){
    int temp=a[j][i];
    int c=m-1-i;
    a[j][i]=a[j][c];
    a[j][c]=temp;
    }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            printf("%d",a[i][j]);
        }
        puts(" ");
    }
}