#include<stdio.h>
#include<stdbool.h>
#define MAX 5
char  a[MAX];
int top=-1;
bool empty() {
    if(top==-1) {
        return 1;
    }
    else {
        return 0;
    }
}
bool full() {
    if(top==MAX-1) {
        return 1;
    }
    else {
        return 0;
    }
}
void push(int n) {
    if(!full()) {
        a[++top]=n;
    }
    else {
        printf("overflow\n");
    }
}
void pop() {
    if(!empty() ) {
        top--;
    }
    else {
        printf("underflow\n");
    }
}
int istop() {
    return (a[top]=='+');
}
void call() {
    while(top>-1&&a[top]!='(') {
        top--;
    }
    top--;
}

int main() {
    int flag=1;
    char *s=malloc(10*sizeof(char));
    scanf("%s",s);
    int i=0;
    for(s[i]; s[i]!='\0'; s[++i]) {
        if(s[i]=='('||s[i]=='+') {
            push(s[i]);
        }
        else {
            if(s[i]==')') {
                if(istop()) {
                    call();
                }
            
            else {
                flag=0;
                break;

            }
        }
    }
    }
    if(flag==0||top!=-1) {
        printf("duplicate");
    }
    else {
        printf("no duplicate");

    }
}