/*#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *start =NULL;
void create() {
    int val;
    scanf("%d",&val);
    while(val!=-1) {
        struct node *new,*ptr;
        new=malloc(sizeof(struct node));
        new->data=val;
        if(start==NULL) {
            start=new;
            new->next=NULL;
        }
        else {
            ptr=start;
            while(ptr->next!=NULL) {
                ptr=ptr->next;
            }
            ptr->next=new;
            new->next=NULL;
        }
        scanf("%d",&val);
    }
}
void display() {
    struct node *ptr;
    ptr=start;
    if(start==NULL) {
        printf("List is empty");
    }
    else {
        while(ptr!=NULL) {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
    }
}
void insertbeg() {
    struct node *new;
    new=malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next=start;
    start=new;
}
void insertend() {
    struct node *ptr,*new;
    new=malloc(sizeof(struct node));
    scanf("%d",&new->data);
    ptr=start;
    while(ptr->next!=NULL) {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=NULL;
}
void insertmidbefore() {
    struct node *new,*ptr;
    int loc;
    new=malloc(sizeof(struct node));
        scanf("%d",&new->data);
    scanf("%d",&loc);
    ptr=start;
    for(int i=0; i<loc-2; i++) {
        ptr=ptr->next;
    }
    new->next=ptr->next;
    ptr->next=new;
}
void insertmidafter() {
    struct node *ptr,*new;
    int loc;
    new=malloc(sizeof(struct node));
    scanf("%d",&new->data);
    scanf("%d",&loc);
    ptr=start;
    for(int i=0; i<loc-1; i++) {
        ptr=ptr->next;
    }
    new->next=ptr->next;
    ptr->next=new;
}
void deletebeg() {
    struct node *ptr;
    ptr=start;
    start=start->next;
    free(ptr);
}
void deletemid() {
    struct node *ptr,*preptr;
    int val;
    ptr=start;
    scanf("%d",&val);
    while(ptr->data!=val) {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
}
void deleteend() {
    struct node *ptr,*preptr;
    ptr=start;
    while(ptr->next!=NULL) {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
}
void search() {
    int val,count=0,flag=0;
    struct node *ptr;
    ptr=start;
    scanf("%d",&val);
    while(ptr!=NULL) {
        count++;
        if(ptr->data==val) {
            flag=0;
            break;
            }
        else {
            flag=1;
        }
        ptr=ptr->next;

    }
    if(flag==1) {
        printf("%d isn't found",val);
    }
    else{
    printf("d is found at position -%d",count);
    }
}

int main() {
    int option;

    do {
        printf("**********\n1.create\n2.display\n3.insertbeg\n4.insertend\n5.insertmidbefore\n6.insertmidafter\n7.deletebeg\n8.deleteend\n9.deletemid\n10.search\n11.exit\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:create();
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
             insertmidbefore();
            break;
        case 6:
            insertmidafter();
            break;
        case 7:
            deletebeg();
            break;
        case 8:
            deleteend();
            break;
        case 9:
             deletemid();
            break;
        case 10:
            search();
            break;
        }
    }
    while(option!=11);
}*/
















