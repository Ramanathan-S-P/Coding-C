#include<stdio.h>
#define pf printf
#define sf scanf
int main(){

int m,n,x,y;
sf("%d %d %d %d",&m,&n,&x,&y);
int a[m][n];
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
sf("%d",&a[i][j]);
}
}
int b[x][y];
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
sf("%d",&b[i][j]);
}
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
pf("%d ",a[i][j]);
}
pf("\n");
}
pf("\n");
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
pf("%d ",b[i][j]);
}
pf("\n");
}

int c[m][y];
memset(c, 0, m*y*sizeof( int));
if(n==x){
for(int i=0;i<m;i++){
for(int j=0;j<y;j++){
//c[i][j]=0;
for(int k=0;k<n;k++){
c[i][j]+=a[i][k]*b[k][j];
}
pf("%d ",c[i][j]);
}
pf("\n");
}
}
}




    