#include<stdio.h>
struct map {
    char c[3];
    int n;
};
int main() {
    char a[][3]= {"tq","hh","ch","hh","tt"};
    struct map * m[5];
    for(int i=0;i<5;i++){
    m[i]=(struct map*)malloc(sizeof(struct map));
    }
    for(int i=0; i<5; i++) {
        m[i]->n=0;
    }
    for(int i=0; i<5; i++) {
        int flag=0;
        int j;
        for( j=0; j<5&&m[j]->n!=0; j++) {
        

            if(strcmp(m[j]->c,a[i])==0) {
                m[j]->n++;
                flag=1;
                break;
            }
        }
        if(flag==0) {
            strcpy(m[j]->c,a[i]);
            m[j]->n++;
        }
    }
    for(int i=0; i<5; i++) {
        if(m[i]->n==1) {
            printf("%s",m[i]->c);
            break;
        }
    }
}

