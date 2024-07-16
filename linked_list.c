#include<stdio.h>
typedef struct list{
int data;
struct  list*next;
} l;
void push(l**q,int a){
l*temp=malloc(sizeof(l));
temp->data=a;
temp->next=NULL;
if(*q==NULL){
*q=temp;
}
else{
l*start=*q;
while(start->next!=NULL){
start=start->next;
}
start->next=temp;
}
}
void print(l*q){
l*start=q;
while(start!=NULL){
printf("%d->",start->data);
start=start->next;
}
printf("NULL");
}

int main(){
l *q;
push(&q,3);
push(&q,4);
print(q);
l*a,*b;

}