#include<stdio.h>
int arr[][4]={{-1,0},{1,0},{0,-1},{0,1}};
int b[][100];
int row,col;
void rec(int *a[] ,int x,int y,int num){
int temp=a[x][y];
b[x][y]=num;
for (int i=0;i<4;i++){
int m=x+arr[i][0],n=y+arr[i][1];
if(0<=m<row&&0<=col<n){
if(a[m][n]==temp){
rec(a[][col],m,n,num);
}
}
}
}
int main(){
int x,y,num;

scanf("%d %d",row,col);
int a[row][col];
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
scanf("%d",&a[i][j]);
b[i][j]=a[i][j];

}
}
scanf("%d %d %d",&x,&y,&num);
rec(a[][],x,y,num);
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("%d",b[i][j]);
}
printf("\n");
}
}

