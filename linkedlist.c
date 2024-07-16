#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct list {
    char data[100];
    struct list *nxt;
}*start,*q;
void create() {
    struct list * temp;
    temp=malloc(sizeof(struct list));
    scanf("%s",temp->data);
    temp->nxt=NULL;
    if(start==NULL) {
        start=temp;
    }
    else {
        q=start;
        while(q->nxt!=NULL) {
            q=q->nxt;
        }
        q->nxt=temp;
    }

}
void display() {
    if(start==NULL) {
        printf("table is empty");
    }
    else {
        q=start;
        while(q!=NULL) {
            printf("%s",q->data);
            q=q->nxt;
        }
    }
}
void search() {
    int flag=0;
    char c[100];
    int count=0;
    scanf("%s",&c);
    q=start;
    while(q!=NULL) {
        if(!(strcmp(q->data,c))) {
            printf("data found at %d",count);
            flag=1;
            break;
        }
        q=q->nxt;
        count++;
    }
    if(flag==0) {
        printf("data not found");
    }

}
int main()
{
    int num;
    while(1) {
        scanf("%d",&num);
        switch(num) {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            return 0;
        }
    }
}


