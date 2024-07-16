#include<stdio.h>
#define pf printf 
#define sf scanf
int main(){
int n;
sf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;i+j<n;j++){
printf("-");
}
for(int k=i;k>=0;k--){
pf(" *");
}
pf("\n");
}
for(int i=n-1;i>0;i--){
for(int j=0;j+i<=n;j++){
printf("-");
}
for(int k=i;k>0;k--){
pf(" *");
}
pf("\n");
}
return 0;
}