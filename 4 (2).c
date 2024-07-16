#include<stdio.h>
int arr[][4]={{-1,0},{1,0},{0,-1},{0,1}};

int row,col;
int  rec(int a[row][col] ,int x,int y,int num){
int temp=a[x][y];
a[x][y]=num;
for (int i=0;i<4;i++){
int m=0,n=0;
m=x+arr[i][0];
n=y+arr[i][1];
if(0<=m<row&&0<=n<col){
if(a[m][n]==temp){
rec(a,m,n,num);
}
}
}
return 0;

}
int main(){
int x,y,num;
row=8;
col=8;
x=y=4;
num=3;
int a[][8] = {{1, 1, 1, 1, 1, 1, 1, 1},
 {1, 1, 1, 1, 1, 1, 0, 0},
 {1, 0, 0, 1, 1, 0, 1, 1},
 {1, 2, 2, 2, 2, 0, 1, 0},
 {1, 1, 1, 2, 2, 0, 1, 0},
 {1, 1, 1, 2, 2, 2, 2, 0},
 {1, 1, 1, 1, 1, 2, 1, 1},
{1, 1, 1, 1, 1, 2, 2, 1},
 };
 for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("\n");
rec(a,x,y,num);
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
}

    