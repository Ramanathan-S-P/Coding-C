#include<stdio.h>
int main(){
int a[]={7,6,5,4,3,2,1};
int n=7;
for(int j=n-1;j>=1;j--){
int flag=0;
for(int i=0;i<j;i++){
if(a[i]>a[i+1]){
int k=a[i];
a[i]=a[i+1];
a[i+1]=k;
flag=1;
}
}
if(flag!=1){
break;
}
}
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
}

