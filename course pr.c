#include<stdio.h>
#include<stdbool.h>
typedef struct q {
    int data;
    struct q* next;
} q;
void push(q**p,int x) {

    q* temp=malloc(sizeof(q));
    temp->data=x;
    temp->next=NULL;
    if(*p==NULL) {
        *p=temp;
    }
    else {
        q*start=*p;
        while(start->next!=NULL) {
            start=start->next;
        }
        start->next=temp;
    }

}
int pop(q **p) {
    int x=(*p)->data;
    *p=(*p)->next;

}
void print(q *p) {
    q*start=p;
    while(start!=NULL) {
        printf("%d ",start->data);
        start=start->next;
    }
}
bool isempty(int *q){
if(q==NULL){
return 1;
}
else{
return 0;
}
}




int main() {
int count=0;
    q *q=NULL;
    int num;
    int n;
    int ans[num+1];
    int course[num+1][num+1];
    int mat[n+1][2];
    int ind[num+1];
    int deg[num+1];
    memset(deg,0,n*sizeof(int));
    memset(ind,0,num*sizeof(int));
    memset(course,0,num*num*sizeof(int));
    scanf("%d %d",&n,&num);
    for(int i=0; i<n; i++) {
        scanf("%d %d",&mat[i][0],&mat[i][1]);
        int s=mat[i][0];
        int p=mat[i][1];
        printf("before: %d %d\n",mat[i][0],mat[i][1]);
        course[p][ind[p]]=s;
        ind[p]++;
        printf("after: %d %d\n",mat[i][0],mat[i][1]);
        
      //  (deg[mat[i][0]])++;
    }
  for(int j=0;j<n;j++){
   printf("%d %d\n",mat[j][0],mat[j][1]);
    }
    
    
    
    
    
    
    
    /*
    
    for(int  j=0; j<num; j++) {
        if(deg[j]==0) {
            push(&q,j);
        }
    }
    while(!isempty(q)){
    
    int t=q->data;
    
    pop(&q);
    ans[count++]=t;
    for(int i=0;i<ind[t];i++){
    if(--deg[course[t][i]]==0){
    push(&q,course[t][i]);
    }
    }
    }*/
    
    }

    