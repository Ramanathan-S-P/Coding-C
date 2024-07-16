#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    int ma=0;
    int mi=0;
    for(int i=1; i<n; i++) {
        if(a[i]>max) {
            max=a[i];
            ma++;
        }
        if(a[i]<min) {
            min=a[i];
            mi++;
        }
    }
    printf("%d %d",ma,mi);
    return 0;
}

