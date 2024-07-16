#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack {
    int s[5];
    int top;
} st;

int stfull() {
    if(st.top>=4) {
        return 1;
    }
    else {
        return 0;
    }
}
int stempty() {
    if(st.top==-1) {
        return 1;
    }
    else {
        return 0;
    }
}
void push(int num) {
    st.top++;
    st.s[st.top]=num;
}
void pop() {
    printf("%d popped ",st.s[st.top]);
    st.top--;
}
void display() {
    for(int i =st.top; i>=0; i--) {
        printf("%d\n",st.s[i]);
    }
}
int main()
{
    int num;
    char ans;
    char *str;
    int item;
    st.top=-1;
    do {

        printf("\n1)push\n2)pop\n3)display\n4)halt\n");
        scanf("%d",&num);
        switch(num) {
        case 1:
            scanf("%d",&item);
            if(!stfull()) {
                push(item);
                printf("\npushed %d",st.s[st.top]);
            }
            else {
                printf("\ncan't push stack is full");
            }
            break;

        case 2:
            if(!stempty()) {

                pop();
            }
            else {
                printf("\ncan't pop stack is empty");
            }
            break;
        case 3:
            display();
            break;
        case 4:
            goto halt;

        }
       
} while(1);
halt:
    return 0;
}