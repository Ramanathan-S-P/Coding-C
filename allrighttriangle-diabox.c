#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
//topright triangle
    /*
    for(int i=0;i<n;i++){
    printf("*");
    }
    puts(" ");
    for(int i=1;i<n;i++){
    int j;
    for( j=0;j<i;j++){
    printf(" ");
    }
    for(j;j<n;j++){
    printf("*");
    }
    puts(" ");
    }
    */
//topleft triangle
    /*
    for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
    printf("*");
    }
    puts(" ");

    */
//bottom left triangle
    /*
    for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
    printf("*");
    }
    puts(" ");
    }
    }*/
//bottom right
    /*
    for(int i=0;i<n;i++){
    int j;
    for(j=0;j<n-i-1;j++){
    printf(" ");
    }
    for(j;j<n;j++){
    printf("*");
    }
    puts(" ");
    }

    */
    //hollow diamond surrounded by box...
/*
    for(int i=0; i<n; i++) {
        int j;
        for( j=0; j<n-i; j++) {
            printf("*");
        }
        for(j; j<n; j++) {
            printf(" ");
        }

        for( j=1; j<i; j++) {
            printf(" ");
        }
        for(j; j<n; j++) {
            printf("*");
        }

        puts(" ");
    }
    for(int i=1; i<n; i++) {
        int j;
        for(j=0; j<=i; j++) {
            printf("*");
        }
        for(j; j<n; j++) {
            printf(" ");
        }
        for(j=1; j<n-i -1; j++) {
            printf(" ");
        }
        for(j; j<n; j++) {
            printf("*");
        }
        puts(" ");
    }


*/
}