#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i+j==n-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j=1; j<n; j++) {
            if(i==j) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        puts(" ");
    }
    for(int i=1; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j=1; j<n; j++) {
            if(j+i==n-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        puts(" ");

    }
}
