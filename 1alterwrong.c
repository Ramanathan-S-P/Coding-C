#include<stdio.h>

int main() {
/* Two loop method
    int arr[]= {17,5,8,6,7,-1};

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        int max=-1;
        for(int j=i+1; j<sizeof(arr)/sizeof(arr[0]); j++) {
            if(arr[j]>max){
             /*u can also use fmax fun()
             return double convert to int*/
            /*max=arr[j];
            }
            }
        arr[i]=max;
    }
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ",arr[i]);
    }
}*/
int a[]={17,5,8,6,7,-1};
int len=sizeof(a)/sizeof(a[0]);
int max=-1;

for(int i=len-1;i>=0;i--){
if(a[i]>max){
max=a[i];
}
a[i]=;
}
}
    