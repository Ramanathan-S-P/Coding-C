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





void reorder(l**q){
l*temp=*q;
while(temp->next->next!=NULL){
temp=temp->next;
}
l*t=temp->next;
temp->next=NULL;
l*s=*q;
t->next=s->next;
(*q)->next=t;
}

int main() {
    l*q;
    l*a=NULL,*b=NULL;
    
    push(&q,3);/*
    push(&q,4);
    push(&q,5);
    push(&q,6);*/
    printf("before reorder\n");
    print(q);
    puts(" ");
    reorder(&q);
    printf("after reorder\n");
    print(q);/*
   split(q,&a,&b);
  //  fun(q,&a);
  print(q);
  puts(" ");
    print(a);
    puts(" ");
    print(b);
    */
    





}