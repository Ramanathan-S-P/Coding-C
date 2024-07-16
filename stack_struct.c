#include<stdio.h>
typedef struct stack{
int a[100];
int top;
}s;
s q;
void push(int x){
++q.top;
q.a[q.top]=x;
}
void pop(){
--q.top;
}
void print(){
for(int i=q.top;i>=0;i--){
printf("%d\n",q.a[i]);
}
}
int main(){
q.top=-1;
push(3);
push(4);
pop();
print();
}