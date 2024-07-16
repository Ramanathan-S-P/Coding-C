#include<stdio.h>
#define pf printf
int n;
void  sort(int *a,int len){
int i=len-1;
while(i>=0){
if(a[len]<a[i]){
i--;
}
else{
break;
}
}
int temp=a[len];
for(int j=len;j>i;j--){
a[j]=a[j-1];
}
a[i+1]=temp;
printf("\n");
for(int i=0;i<n;i++){
printf("%d ",a[i]);

}
printf("\n\n");
}




int main(){


scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);

}
for(int i=1;i<n;i++){
sort(a,i);
}

}

    