#include<stdio.h>
struct st {
    int *arr;
    int size;
    int cap;
};
int j=-1;
void addnum( struct st * s,int a) {
    j++;
    int t=j-1;
    while(t>=0&&s->arr[t]>a) {
        s->arr[t+1]=s->arr[t];
        t--;

    }
    s->arr[t+1]=a;
    for(int k=0; k<=j; k++) {
        printf("%d-",s->arr[k]);

    }
}
void median(struct st *s) {
    int num=j+1;
    if(num%2!=0) {
        printf("=%d\n",s->arr[num/2]);
    }
    else {
        printf("=%d\n",(s->arr[num/2-1]+s->arr[num/2])/2);
    }
}



int main() {
    struct st* s=(struct st*)malloc(sizeof(struct st));
    s->cap=10;
    s->arr=(int*) malloc(10*sizeof(int));

    for(int i=0; i<10; i++) {
        int n;
        scanf("%d",&n);
        addnum(s,n);
        median(s);
    }/*
    for(int i=0; i<10; i++) {

        printf("%d-",s->arr[i])
    }*/

}
