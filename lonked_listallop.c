#include<stdio.h>
typedef struct list {
    int data;
    struct  list*next;
} l;
void push(l**q,int a) {
    l*temp=malloc(sizeof(l));
    temp->data=a;
    temp->next=NULL;
    if(*q==NULL) {
        *q=temp;
    }
    else {
        l*start=*q;
        while(start->next!=NULL) {
            start=start->next;
        }
        start->next=temp;
    }
}
void print(l*q) {

    while(q!=NULL){
        printf("%d->",q->data);
        q=q->next;
    }
    printf("NULL");
}
void split(l*d,l**a,l**b) {


    while(d!=NULL) {
    l*t=malloc(sizeof(l));
        t->data=d->data;
        t->next=NULL;
        d=d->next;
        
        if(*a!=NULL) {

            t->next=(*a);
            (*a)=t;
            
        }
        else {
            (*a)=t;
            
        }
        
        
        
        
        if(d!=NULL) {
        t=malloc(sizeof(l));
            t->data=d->data;
            t->next=NULL;
            d=d->next;
            if(*b!=NULL) {
                t->next=*b;
                *b=t;
            }
            else {
                *b=t;
            }
        }
        
    }
    
    
    

}

void fun(l* q, l** a) {
    *a = NULL;  // Initialize the new list to NULL
    while (q != NULL) {
        // Allocate memory for the new node
        l* temp = (l*)malloc(sizeof(l));
        if (temp == NULL) {
            // Handle memory allocation failure
            exit(1);
        }
        temp->data = q->data;  // Copy the data
        temp->next = *a;       // Insert the new node at the beginning of the list
        *a = temp;             // Update the head of the new list
        q = q->next;           // Move to the next node in the input list
    }
}





void reorder(l*q){
/*
l*d=malloc(sizeof(l));
d->data=45;
d->next=q;
q=d;*/
//above shows the diff between how passing as address or just copy of a pointer 
//we need to pass address only if we need changes in linked list as the initial mode matters
//if we need to make changes without affecting main lost we can pass as copy that is single pointer 
//and even if we change the initial node no changes is seen.
l*temp=q;
while(temp->next!=NULL){



l*iter=temp;
int flag=0;
while(iter->next->next!=NULL){
flag=1;
iter=iter->next;
}
if(flag==0){
break;
}
l*newnode=iter->next;
iter->next=NULL;
newnode->next=temp->next;
temp->next=newnode;
temp=temp->next->next;
}
printf("inside\n");
print(q);
puts(" ");
}


int main() {
    l*q;
    l*a=NULL,*b=NULL;
    
    push(&q,1);
    push(&q,2);
    push(&q,3);
    push(&q,4);
    push(&q,5);
    push(&q,6);
    push(&q,7);
    push(&q,8);
    printf("before reorder\n");
    print(q);
    puts(" ");
    reorder(q);
    print(q);
    
    





}