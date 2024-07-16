#include<stdio.h>
#include<stdbool.h>
bool is(int num){
do{
if(3==num%10){
return 1;
}
}while((num/=10)!=0);
return 0;
}
int main(){
int n;
scanf("%d",&n);
int total=n;
for(int i=1;i<=n;i++){
if(is(i)){
--total;
}
}
printf("%d",total);
}
    