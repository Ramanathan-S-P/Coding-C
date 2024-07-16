/*#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
# define max 5
int st[max],val;
int top=NULL;
void push() {
    scanf("%d",&val);
    if(top==max-1) {
        printf("stack overflow");
    }
    else {
        top++;
        st[top]=val;
    }
}
void pop() {
    if(top==NULL) {
        printf("stack underflow");
    }
    else {
        printf("%d is removed",st[top]);
        top--;
    }
}
void peek() {
    if(top==NULL) {
        printf("stack is empty");
    }
    else {
        printf("%d is on the top",st[top]);
    }
}
void display() {
    int i;
    if(top==NULL) {
        printf("stack is empty");
    }
    else {
        for(i=top; i>=0; i++) {
            printf("%d\n",st[i]);
        }
    }
}


int main() {
    int option;
    do {
        printf("*******Menu*******\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        scanf("%d",&option);
        switch(option) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display ();
            break;


        }
    }
    while(option!=5);




}*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
# define max 5
int front=-1,rear=-1;
int q[max],val;
void insert() {
    scanf("%d",&val);
    if(rear==max-1) {
        printf("queue overflow");
    }
    else if(front==-1 && rear ==-1) {
        front=rear=0;
    }
    else {
        rear++;
    }
    q[rear]=val;
}
void delete() {
    if(front==-1 || front >rear) {
        printf("queue is empty");
    }
    else {
        printf("%d is removed",q[front]);
        front++;
    }
}
void display() {
    int i;
    if(front==-1||front>rear) {
        printf(" queue is empty");
    }
    else {
        for(i=front; i<=rear; i++) {
            printf("%d\n",q[i]);
        }
    }
}
void main() {
    int option;
    do {
        printf("*******Menu*******\n1.insert\n2.delete\n3.display\n4.exit\n");
        scanf("%d",&option);
        switch(option) {
        case 1:
            insert ();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        }
    }
    while(option!=4);
}
*/

/*
#include<stdio.h>
#include<conio.h>
int a[100];
int n;
void create() {
    int i;
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
}
void display() {
int i;
    for (i=0; i<n; i++) {
        printf("%d\n",a[i]);
    }
}
void insertbeg()
{
    int val,i;
    scanf("%d",&val);
    for(i=n-1; i>=0; i--) {
        a[i+1]=a[i];
    }
    a[0]=val;
         n++;
}
void insertend() {
    int val;
    scanf("%d",&val);
    a[n]=val;
    n++;
}
void insertmid() {
    int pos,i,val;
    scanf("%d",&pos);
    scanf("%d",&val);
    for(i=n-1; i>=pos-1; i--) {
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    n++;
}
void delbeg() {
    int i;
    for(i=0; i<n-1; i++) {
        a[i]=a[i+1];
    }
    n--;
}
void delmid() {
    int pos,i;
    scanf("%d",&pos);

    for(i=pos-1; i<n; i++) {
        a[i]=a[i+1];
    }
    n--;
}
void delend() {
    n--;
}
void main() {
    int option;
    do {
        printf ("*******Menu*******\n1.create\n2.display\n3.insertbeg\n4.insertend\n5.insertmid\n6.delbeg\n7.delmid\n8.delend\n9.exit\n");
        scanf("%d",&option);
        switch(option) {
        case 1:
            create ();
            break;
        case 2:
            display();
            break;
        case 3:
            insertbeg();
            break;
        case 4:
            insertend();
            break;
        case 5:
            insertmid();
            break;
        case 6:
            delbeg();
            break;
        case 7:
            delmid();
            break;
        case 8:
            delend();
            break;
        }
    }
    while(option!=9);
}*/

