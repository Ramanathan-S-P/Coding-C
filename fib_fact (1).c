#include<stdio.h>
int factorial(int num) {
    if(num==1||num==0) {
        return 1;
    }
    return num*factorial(num-1);
}
void fib(int num) {
    if(num<1) {
        printf("invalid input");
    }
    else {
        int a=0;
        int b=1;

        for(int i=1; i<=num; i++) {
            if(i>2) {

                int c=a+b;
                printf("%d ",c);
                a=b;
                b=c;

            }
            if(i==1) {
                printf("%d ",a);
            }
            if(i==2) {
                printf("%d ",b);
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    do{
    switch(n) {
    case 1:

        printf("%d\n",factorial(0));
        printf("%d\n",factorial(1));
        printf("%d\n",factorial(9));
        break;
    case 2:
        fib(0);
        puts(" ");
        fib(1);
        puts(" ");
        fib(9);
        break;
    default:
        printf("invalid input");
    }
    scanf("%d",&n);

}while(n!=3);
}
