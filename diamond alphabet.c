#include<stdio.h>
#define pf printf
#define sf scanf
int main(){
int n;
sf("%d",&n);
int temp;
int c=-2;
for(int i=0;i<n;i++){
int ct=i;
while(ct<n){
pf("_");
ct++;
}
temp=n;
c+=2;
int j=0;
while(j<=c){
if(j<c/2){
printf("%c",96+temp);
temp--;
}
else{
pf("%c",96+temp);
temp++;
}
j++;
}
pf("\n");
}

for(int i=n-1;i>0;i--){
int ct=i;
while(ct<=n){
pf("_");
ct++;
}
temp=n;
c-=2;
int j=0;
while(j<=c){
if(j<c/2){
printf("%c",96+temp);
temp--;
}
else{
pf("%c",96+temp);
temp++;
}
j++;
}
pf("\n");
}

}



