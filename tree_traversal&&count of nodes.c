#include<stdio.h>
typedef struct tree {
int data;
struct tree*left;
struct tree*right;
} t;
static int ans=0;
void count(t*x){
if(x!=NULL){

count(x->left);
ans++;
count(x->right);
//printf("%d",x->data); alter it based on type of traversal.

}
}

int main(){
t*x=malloc(sizeof(t));
x->data=1;
t* l=malloc(sizeof(t));
l->data=2;
l->left=l->right=NULL;
x->left=l;
l=malloc(sizeof(t));
l->data=3;
l->left=l->right=NULL;
x->right=l;
count(x);
printf("%d",ans);
}