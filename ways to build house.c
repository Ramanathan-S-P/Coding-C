#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int i=1;
int count=0;
int no;
scanf("%d",&no);
while(i<n-1){
if(a[i]==0&&a[i-1]==0&&a[i+1]==0){
count++;
i+=2;
}
else{
i++;
}
}

if(count>=no){
printf("true");
}
else{
printf("false");
}
}