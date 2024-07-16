#include<stdio.h>
#include<stdbool.h>
int tar;
void fun(int *a, int len,int *dp){
int sum=0;
printf("len :%d->",len);
for(int i=0;i<len;i++){
printf("%d ",a[i]);
sum+=a[i];
}
puts(" ");
if(dp[sum]!=1){
dp[sum]=1;
}
if(tar==sum){
printf(" above set is target set\n");
}


int b[len-1];
memset(b,0,len*sizeof(int));
if(len==1){

}
else{
for(int i=0;i<len;i++){
int count=0;
for(int j=0;j<len;j++){
if(j!=i){
//printf("inside loop: a[%d ]=%d ",j,a[j]);
b[count++]=a[j];
}
}
fun(b,len-1,dp);
puts(" ");
}
}
}
int main(){
int a[10];
int len;
int sum=0;
scanf("%d",&len);
for(int i=0;i<len;i++){
scanf("%d",&a[i]);
sum+=a[i];
}
int dp[sum];
memset(dp,0,sum*sizeof(int));
printf("\nenter target sum: ");
scanf("%d",&tar);
fun(a,len,dp);

/*if(dp[tar]==1){
printf("target achieved");
}
else
printf("not achieved");
*/
}
    