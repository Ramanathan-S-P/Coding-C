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
    scanf("%d",&n);
    scanf("%d",&num);
    int ans[num+1];
    int course[num][num];
    int mat[n][2];
    int ind[num];
    int deg[num];
    memset(ind,-1,num*sizeof(int));
    memset(deg,0,num*sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d",&mat[i][0]);
        scanf("%d",&mat[i][1]);
        
     //   printf("before: %d %d\n",mat[i][0],mat[i][1]);
        course[mat[i][1]][++ind[mat[i][1]]]=mat[i][0];
        
        //printf("after: %d %d\n",mat[i][0],mat[i][1]);
        
      deg[mat[i][0]]++;
      }
      /*
      for(int i=0;i<num;i++){
      printf("%d::",i);
      for(int j=0;j<=ind[i];j++){
      printf("%d" ,course [i][j]);
      }
      puts(" ");
      }*/
      
    
    for(int  j=0; j<num; j++) {
        if(deg[j]==0) {
            push(&q,j);
        }
    }
    
    
    while(!isempty(q)){
    
    int t=q->data;
    
    pop(&q);
    ans[count++]=t;
    for(int i=0;i<=ind[t];i++){
  //  printf("%d-%d-%d\n",t, course[t][i],deg[course[t][i]]);
    if(--deg[course[t][i]]==0){
    push(&q,course[t][i]);
    }
    }
    }
   if(num==count){
   printf("true");
   }
   else{
   printf("false");
   }
    }

    