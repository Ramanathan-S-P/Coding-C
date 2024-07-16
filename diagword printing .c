#include<stdio.h>
int main() {
    char a[100];
    scanf("%s",&a);
    int i;
    for( i=0; i<=strlen(a)/2; i++) {
        for(int j=0; j<strlen(a); j++) {
            if(j==i||j==strlen(a)-i-1) {
                printf("%c",a[j]);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
    for(int i=strlen(a)/2-1; i>=0; i--) {
        for(int j=0; j<strlen(a); j++) {
            if(j==i||j==strlen(a)-i-1) {
                printf("%c",a[j]);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}