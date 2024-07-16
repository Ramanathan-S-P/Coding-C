#include<stdio.h>
int cmp(const void *x,const void *y){
return *(int *)x-*(int *)y;
}
void sort(int m,int n,int a[m][n],int min,int row,int col) {
int minrow;
int temp=min;
int flag=0;
for(int i=++row;i<m;i++){
if(min>a[i][0]){
flag=1;
minrow=i;
min=a[i][0];
}
}
if(flag!=0){
a[--row][col]=a[minrow][0];
a[minrow][0]=temp;
for(int i=0;i<n-1;i++){
int ele=a[minrow][i];
int ind=i;
for(int j=i+1;j<n;j++){
if(ele>a[minrow][j]){
ele=a[minrow][j];
ind=j;
}
}

if(ind!=i){
int tempo=a[minrow][ind];
a[minrow][ind]=a[minrow][i];
a[minrow][i]=tempo;
}

}
}
}

int main(){
int a[3][3]={ {7,8,9},{4,5,6},{1,2,3}};
int m=3,n=3;
for(int i=0;i<m-1;i++){
for(int j=0;j<n;j++){
sort(m,n,a,a[i][j],i,j);
}
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
}