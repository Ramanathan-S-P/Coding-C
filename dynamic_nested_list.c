#include<stdio.h>
struct list {
    int len;
    char ch;
    int arr[1000];
    float brr[1000];
    char *str[1000];
};
struct list *l[1000];
int collec[1000][1000];
int mat[1000];
int *arr[1000];
int ind=0;
int pos=-1;
void print(int i,int j,char k) {
    if(k=='a') {
        printf("%d ",l[j]->arr[collec[i][j]]);
    }
    else if(k=='b') {
        printf("%0.4f ",l[j]->brr[collec[i][j]]);
    }
    else {
        printf("%s ",l[j]->str[collec[i][j]]);
    }
}
int fun(int s,int n,int ind) {
    int ai;
    if(s==n) {
        for(int i=0; i<=l[s]->len; i++) {
            ++pos;
            int j;
            for( j=0; j<ind; j++) {
                collec[pos][j]=mat[j];
            }
            collec[pos][j]=i;

        }

        ind-=1;
        return 0;
    }
    for(int i=0; i<=l[s]->len; i++) {
        mat[ind]=i;
        fun(s+1,n,++ind);
        ind--;
    }
    return 0;
}

int main() {

    int num=-1;
    int flag=1;
    while(1) {
        if(flag==0) {
            break;
        }
        else {
        printf ("\n(1)->integer list \n(2)->float list\n(3)->string list\n(any_other_num)->exit\n\nyour_entry : ");
            l[++num]=malloc(sizeof(struct list));
            int n;
            scanf("%d",&n);
            int i=-1;
            switch(n) {
            case 1:
                //
                printf ("\n enter -1 to exit\n");
                while(1) {
                    int in;
                    scanf("%d",&in);
                    if(in !=-1) {
                        l[num]->arr[++i]=in;
                    }
                    else {
                        break;
                    }
                }
                l[num]->len=i;
                l[num]->ch='a';
                break;

            case 2:
            printf ("\n enter -1 to exit\n");

                while(1) {
                    float in;
                    scanf("%f",&in);
                    if(in !=-1) {
                        l[num]->brr[++i]=in;
                    }
                    else {
                        break;
                    }
                }
                l[num]->len=i;
                l[num]->ch='b';
                break;


            case 3:
           printf ("\n type \"exit\" to exit\n");
                while(1) {
                    char c[1000];
                    scanf("%s",&c);

                    if(strcmp(c,"exit")) {
                        l[num]->str[++i]=malloc((strlen(c)+1)*sizeof(char));
                        strcpy(l[num]->str[i],c);
                    }
                    else {
                        break;
                    }
                }
                l[num]->len=i;
                l[num]->ch='c';
                break;
            default:
                flag=0;
                break;
            }
        }
    }/*


    for(int i=0; i<3; i++) {
        arr[i]=malloc(sizeof(int)*n);
        for(int j=0; j<3; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf ("%d ",arr[i][j]);
        }
        printf("\n");
    }


    for(int i=0; i<n; i++) {

        mat[ind]=arr[0][i];
        int s=1;
        fun(s,n,++ind);
        ind--;
        printf("\n");
    }*/
    for(int i=0; i<num; i++) {
        if(l[i]->ch=='a') {
            for(int j=0; j<=l[i]->len; j++) {
                printf("%d ",l[i]->arr[j]);
            }
        }
        else if(l[i]->ch=='b') {
            for(int j=0; j<=l[i]->len; j++) {
                printf("%.4f ",l[i]->brr[j]);
            }
        }
        else {
            for(int j=0; j<=l[i]->len; j++) {
                printf("%s ",l[i]->str[j]);

            }

        }
        printf("\n");

    }
    printf ("\ncombination are as follows:\n"); 



    for(int i=0; i<=l[0]->len; i++) {
        mat[ind]=i;
        int s=1;
        fun(s,num-1,++ind);
        ind--;
        
    }
    for(int i=0; i<=pos; i++) {
        for(int j=0; j<num; j++) {
            print(i,j,l[j]->ch);
        }
        printf("\n");
    }

}
