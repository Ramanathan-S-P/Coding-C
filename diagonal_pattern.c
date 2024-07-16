#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<=n/2;i++){
for(int j=0;j<n;j++){
if(i==j||i+j==n-1){
printf("%d",j+1);
}
else{
printf("*");
}
}
puts(" ");
}
for(int i=n/2+1;i<n;i++){
for(int j=0;j<n;j++){
if(i==j||i+j==n-1){
printf("%d",j+1);
}
else{
printf ("*");
}
}
puts(" ");
}
}