#include<stdio.h>
# define sf scanf
# define pf printf
int main() {
int n;
sf("%d",&n);
/*
    for(int i=0; i<n/2+1; i++) {
    
    for(int j=0;j<=i;j++){
    pf(" ");
    }
    
        for(int j=i; j<n; j++) {
            if(i==j||i+j==n-1) {
                pf("*");
            }
            else {
                pf(" ");
            }
        }
        pf("\n");
    }
}*/
for(int i=0;i<=n/2;i++){
for(int j=0;j<n*2-1;j++){
if(i==0){
if(j==0||j==n-1||i+j==((n*2)-2)){
pf("*");
}
else{
pf(" ");
}

}
else{
if(j==i||j==n-1-i||j==n-1+i||i+j==n*2-2){
pf("*");
}
else{
pf(" ");
}
}
}
pf("\n");
}
}