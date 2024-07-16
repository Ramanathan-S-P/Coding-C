#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n*2-1; i>=1; i-=2) {
        int j;
        for(j=0; j<i-1; j++) {
            printf(" ");
        }
        for(j; j<n*2-1; j++) {
            printf("*");
        }
        puts(" ");
    }
    for(int i=2; i<n*2-1; i+=2) {
        int j;
        for(j=0; j<i; j++) {
            printf(" ");
        }
        for(j; j<n*2-1; j++) {
            printf("*");
        }
        puts(" ");
    }

}