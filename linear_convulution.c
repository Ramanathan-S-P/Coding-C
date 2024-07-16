#include<stdio.h>
# define pf printf
int main(){
int  m;
scanf("%d",&m);
int a[m],b[m];
for(int i=0;i<m;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<m;i++){
scanf("%d",&b[i]);
}

int l=2*m-1;
int c[l];
for(int i=0;i<l;i++){
c[i]=0;
for(int k=0;k<m;k++){
for(int x=0;x<m;x++){
if(x+k==i){
//pf("%d*%d-",a[k],b[x]);
c[i]+=a[k]*b[x];
}
}
}
pf("%d-",c[i]);

}
} 

    