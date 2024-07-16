#include<stdio.h>
int main() {
    int res=0;
    int n;
    int num1,num2;
    scanf("%d",&n);
    int len=((int )log10(n))+1;
    int p=pow(10,len/2);
    if(len%2!=0) {

        num2=n%p;
        num1=n/(p*10);
    }
    else {
        num2=n%p;
        num1=n/p;


    }
    int temp=num2;
    num2=0;
    do {
        num2=num2*10+temp%10;
        temp/=10;
    } while(temp!=0);

    if(num1==num2) {

        printf ("palindrome");
    }
    else {
        printf("not a palindrome");
    }
}

