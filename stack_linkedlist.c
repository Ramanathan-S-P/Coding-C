#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
int key;
struct Node* next;
} Node;

Node* init(int data) {
Node* n = (Node*)malloc(sizeof(Node));
n->key = data;
n->next = NULL;
return n;
}

void push(Node** head, int data) {
if(*head == NULL) {
*head = init(data);
return;
}
Node* n = init(data);
n->next=*head;
*head=n;
return;
}

int pop(Node* head) {
if(head == NULL) {
puts("empty");
exit(1);
}
Node* del = head;
int data = del->key;
head = head->next;
free(del);
return data;
}

void print(Node* head) {
for(Node* p = head; p != NULL; p=p->next) {
printf("%d ", p->key);
}
}

int main() {
Node* stack = NULL;
push(&stack, 1);
push(&stack, 2);/*
int del = pop(stack);
printf("%d\n", del);*/
print(stack);
return 0;
}

    