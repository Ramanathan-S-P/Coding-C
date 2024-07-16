#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct list {
    char str[100];
    struct list *next;
}*start;
void create() {
    struct list *temp,*q;
    temp=malloc(sizeof(struct list));
    scanf("%s",temp->str);
    temp->next;
    if(start==NULL) {
        start=temp;
    }
    else {

        q=start;
        while(q->next!=NULL) {
            q=q->next;
        }
        q->next=temp;
    }
}

void search(char *s) {
    struct list *q;
    q=start;
    int count=0;
    int flag=0;
    while(q!=NULL) {
        count++;
        if(!strcmp(s,q->str)) {
            flag=1;
            printf("%s found at %d",s,count);
            break;
        }
        q=q->next;
    }
    if(flag==0) {
        printf("element not found");
    }
}

void display() {
    struct list *q;
    if(start==NULL) {
        printf("no element in ST");
    }
    else {
        q=start;
        while(q!=NULL) {
            printf("\n%s",q->str);
            q=q->next;
        }
    }
}

int main() {
    int n;
    char ch;
    char str[100];
    while(1) {

        printf("\n1)create\n2)search\n3)display\n4)exit\n");
        scanf("%d",&n);
        switch (n) {
        case 1:
            create();
            break;
        case 2:
            scanf("%s",str);
            search(str);
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        }
    }
}






