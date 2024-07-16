#include<stdio.h>
#include<stdbool.h>
bool check(int *a,int ind,int x){
for(int i=0;i<ind;i++){
if(x==a[i]){
return 0;
}
}
return 1;
}
int main(){
int n;
scanf("%d",&n);
int a[n];
a[0]=0;
int num;
int ind=0;

for(int i=0;i<n;i++){

scanf("%d",&num);
if(num%2!=0){
if(check(a,ind,num)){

a[ind++]=num;
}
}
}
for(int i=0;i<ind;i++){
printf("%d ",a[i]);
}
printf("\n%d",ind);
}

    