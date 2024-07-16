#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int reg=0;
void backend(char *s) {

    printf("\nLoad R%d %c",reg++,s[2]);
    printf("\nLoad R%d %c",reg++,s[4]);
       switch(s[3]) {
   case '+':
           printf("\nAdd R%d %R%d",reg-2,reg-1);
           break;
       case '-':
           printf("\nSub R%d %R%d",reg-2,reg-1);
        break;
    case '*':
        printf("\nMul R%d %R%d",reg-2,reg-1);
        break;
    case '/':
        printf("\nDiv R%d %R%d",reg-2,reg-1);
        break;
    }
    printf("\nStore %c R%d",s[0],reg-2);
}

int main() {
    char ch;
    int n;
    char s[100][100];
    scanf("%d%c",&n,&ch);
    for(int I=0; I<n; I++) {
        scanf("%[^\n]%c",s[I],&ch);
    }
    for(int I=0; I<n; I++) {
        backend(s[I]);
    }
    return 0;
}