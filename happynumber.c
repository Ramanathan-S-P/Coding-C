#include<stdio.h>
int sum(int n){
int temp=n;
int sum=0;
do{
int r=temp%10;
sum+=(int)pow(r,2);
}while((temp/=10)!=0);
return sum;
}
int main(){
int n;
scanf("%d",&n);
n=sum(n);
printf("%d\n",n);
while(n!=1&&n!=4){

n=sum(n);
printf("%d\n",n);
}
if(n==1){
printf("happy number");
}
else{
printf("not a happy number");
}
}
