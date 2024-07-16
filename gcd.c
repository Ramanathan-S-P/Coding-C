#include<stdio.h>
int gcd(a,b) {
    while(a>0&&b>0) {
        if(a>b) {
            a=a%b;
        }
        else {
            b=b%a;
        }
    }
    if(a==0) {
        return b;
    }
    return a;
}
int main() {
    printf("%d",gcd(0,11));
}
    