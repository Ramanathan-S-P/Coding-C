#include<stdio.h>
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
void print(q **p) {
    q*start=*p;
    while(start!=NULL) {
        printf("%d ",start->data);
        start=start->next;
    }
}





int main() {
    q *q=NULL;
    int num;
    int n;
    int course[num+1][num+1];
    int mat[n+1][2];
    int ind[n+1];
    int deg[n+1];
    memset(deg,0,n*sizeof(int));
    memset(ind,-1,n*sizeof(int));
    memset(course,-1,num*num*sizeof(int));
    scanf("%d %d",&n,&num);
    for(int i=0; i<n; i++) {
        scanf("%d %d",&mat[i][0],&mat[i][1]);
        course[mat[i][1]][++ind[mat[i][1]]]=mat[i][0];
        deg[mat[i][0]]++;
    }
    
    for(int  j=0; j<num; j++) {
        if(deg[j]==0) {
            printf("%d-",j);
            push(&q,j);
        }
    }
    print(&q);
}



