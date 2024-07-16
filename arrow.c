#include<stdio.h>
# define pf printf
int main(){
int n=12;
for(int i=0;i<6;i++){
for(int j=1;j<n;j++){
if(j<=n/2-i || j >=n/2+i){
pf("*");
}
else{
pf(" ");
}
}
pf("\n");}
int count=2;
for(int i=1;i<6;i++){
int j=1;
while(j<12){
if(j <=count||j>=n-count){

pf("*");
}
else{
pf(" ");
}
j++;
}
count+=1;
pf("\n");
}
}

