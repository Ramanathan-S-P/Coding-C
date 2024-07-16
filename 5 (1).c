#include<stdio.h>
int x,y;
void up(int a[x][y],int m,int n){
printf("inside up\n");

while(m>=0&&n<y){
printf("%d-%d=%d\n ",m,n,a[m][n]);
n++;
m--;
}
}


void down(int a[x][y],int m,int n){
printf("inside down\n");
while(n>=0&&m<y){
printf("%d-%d=%d\n ",m,n,a[m][n]);
m++;
n--;
}
}


int main(){

scanf("%d%d",&x,&y);
int a[x][y];
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
scanf("%d",&a[i][j]);
}
}
for(int j=0;j<y;j++){
if(j%2==0){
up(a,j,0);
}else{

down(a,0,j);

}
}
int i=1;
int j=y-1;
if((i+j)%2==0){
while(i<x){
up(a,j,i);
i++;
if(i<x){
down(a,i,j);
i++;
}
}
}
else{
while(i<x){
down(a,i,j);
i++;
if(i<x){
up(a,j,i);
i++;
}
}
}


}