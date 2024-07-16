#include<stdio.h>
int main() {
    int a[6]= {2,4,8,90,77,54};
    int i;
    for( i=0; i<5; i++) {
        int temp=a[i];
        for(int j=i+1; j<6; j++) {
            if(a[j]>a[i]) {
                if(temp==a[i]) {
                    temp=a[j];
                }
                else {
                    if(a[j]<temp) {
                        temp=a[j];
                    }
                }
            }
        }
        if(temp!=a[i]) {
            a[i]=temp;
        }
        else {
            a[i]=-1;
        }
    }
    a[i]=-1;
    for(int i=0; i<6; i++) {
        printf("%d-",a[i]);
    }
}