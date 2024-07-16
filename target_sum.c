#include<stdio.h>
int len;
int ways(int *a,int i,int sum,int tar){
printf("%d-%d\n",i,sum);
if(i==len&&sum==tar){

return 1;
}
if(i>=len){
return 0;
}
return ways(a,i+1,sum+a[i],tar)+ways(a,i+1,sum-a[i],tar);
}


int main(){
int a[4]={1,1,1,1};
len=4;
int ans=ways(a,0,0,0);
printf("answer->%d",ans);

}