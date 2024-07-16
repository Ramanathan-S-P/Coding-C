#include<stdio.h>
#define pf printf
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++) {
        int min=a[i];
        int minind=i;
        for(int j=i+1; j<n; j++) {
            if(a[j]<min) {
                minind=j;
                min=a[j];
            }
        }
        if(min!=a[i]) {
            int temp=a[minind];
            a[minind]=a[i];
            a[i]=temp;
        }
        
        for(int i=0; i<n; i++) {
            pf("%d ",a[i]);

        }
        printf("\n");
    }
}
