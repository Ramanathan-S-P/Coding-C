#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
int j;
for(j=0;j<n-i-1;j++){
printf(" ");
}
for(j;j<n;j+=2){
printf("* ");
}
puts(" ");
}
for(int i=1;i<n;i++){
int j;
for( j=0;j<i;j++){
printf(" ");
}
for(j;j<n;j+=2){
printf("* ");
}
puts(" ");
}
}