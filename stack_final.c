#include<stdio.h>
struct stack {
    int s[5];
    int top;
} st;
void push(int n) {
    st.top++;
    st.s[st.top]=n;
}
int pop() {
    int a=st.top;
    st.top--;
    return a;
}
void display() {
    for(int I=st.top; I>=0; I--) {
        printf("\n%d",st.s[I]);
    }
}
int isfull() {
    if(st.top>=4) {
        return 1;
    }
    else {
        return 0;
    }
}
int empty() {
    if(st.top==-1) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int n;
    while(1) {
        printf("\n1)push\n2)pop\n3)display\n4)exit\n");
        scanf("%d",&n);
        switch(n) {
        case 1:
            if(!isfull()) {
                scanf("%d",&n);
                push(n);
            }
            else {
                printf ("can't push stack is full");
            }
            break;
        case 2:
            if(empty()) {
                printf("can't pop stack is empty");
            }
            else {
                printf("%d is popped",pop());
            }
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;

        }
    }
}


