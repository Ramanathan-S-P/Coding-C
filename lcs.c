#include<stdio.h>
int fun(char *x,char*y,int m,int n){
if(m==0||n==0){
return 0;
}
if(x[m-1]==y[n-1]){
return 1+fun(x,y,m-1,n-1);
}
else{
return fmax(fun(x,y,m-1,n),fun(x,y,m,n-1));
}
}

int main(){
char *x=malloc(sizeof(char));
char *y=malloc(sizeof(char));
scanf("%s",x);
scanf("%s",y);
int ans=fun(x,y,strlen(x),strlen(y));
printf("%d",ans);
}