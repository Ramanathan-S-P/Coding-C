#include<stdio.h>
int main(){
//if(space in * printf then prints like a diamond ")
int n;
scanf("%d",&n);
for(int i=n-1;i>=0;i--){
int j;
for(j=0;j<i;j++){
printf(" ");
}
for(j;j<n;j++){
printf("* ");
}
puts(" ");

}
for(int i=1;i<n;i++){
int j;
for( j=0;j<i;j++){
printf(" ");
}
for(j;j<n;j++){
printf("* ");
}
puts(" ");
}

}