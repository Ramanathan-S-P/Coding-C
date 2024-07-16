#include<stdio.h>
int main() {
int n;
    scanf("%d",&n);
    for(int i=0; i<n*2-1; i++) {
        printf("*");
    }
    puts(" ");
    for(int i=1; i<n; i++) {
        for(int j=0; j<n*2-1; j++) {
            if(i==j||i+j==n*2-2) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        puts(" ");
    }
}