#include<stdio.h>
int main() {
    int n,l;
    scanf("%d",&l);
    scanf("%d",&n);
    int a[l];
    int b[l];
    for(int i=0; i<l; i++) {
        scanf("%d",&a[i]);
        b[(i+n)%l]=a[i];
    }
    for(int i=0; i<l; i++) {
        printf("%d",b[i]);
    }
}