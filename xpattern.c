#include<stdio.h>
int main() {
    char a[100];
    scanf("%s",&a);
    int i;
    for( i=0; i<=strlen(a); i++) {
        for(int j=0; j<strlen(a); j++) {
            if(j==i||j+i==strlen(a)-1) {
                printf("%c",a[j]);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    }