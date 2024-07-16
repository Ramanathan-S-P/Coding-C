#include<stdio.h>
void swap(int*,int*);
void qksrt(int *a,int m,int n) {
if(m>=n){
return ;
}
    else{
    int i=m-1;
    int j=n-1;
    int p=a[n-1];
    while(1) {
        do {
            i++;
        } while(a[i]<p);
        do {
            j--;
        }
        while(a[j]>p);
        if(i>=j) {
            break;
        }
        swap(&a[i],&a[j]);
    }
    swap(&a[i],&a[n-1]);
    qksrt(a,0,i);
    qksrt(a,i+1,n);
    }
    
}
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    
  qksrt(a,0,n);
    printf("\nAfter Sort");
    for(int i=0; i<n; i++) {
        printf("%d-",a[i]);
    }
    return 0;
}