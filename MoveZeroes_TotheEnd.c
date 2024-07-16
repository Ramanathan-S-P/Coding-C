#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){

scanf("%d",&a[i]);
}
int c=0
for(int i=0;i<n;i++){
if(a[i]!=0){
a[c++]=a[i];
}
}
/*
while(c<n){
a[c++]=0;
}*/

memset(a+c,0,(n-c)*sizeof(int));
for(int i=0;i<n;i++){
printf("%d",a[i]);
}
}

