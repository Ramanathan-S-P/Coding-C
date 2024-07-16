#include<stdio.h>
#include<string.h>

struct N {
    int type;
    char var [10];
} st[50];
int c=0;
void sep(char *s) {
    char typ[100];
    char temp[100];
    int j=0;
    int m=0;
    int I=0;
    for(I=0; I<strlen(s); I++) {
        if(isalpha(s[I])) {
            typ[j++]=s[I];
        }
        else {
            break;
        }
    }
    typ[j]='\0';
    j=0;
    I++;
    for(; I<strlen(s); I++) {
        if(isalpha(s[I]) ) {
            temp[m++]=s[I];
        }
        else {
            if(strcmp(typ,"int")==0) {
                st[c].type=1;
            }
            else {
                st[c].type=2;
            }
            temp[m]='\0';
            m=0;
            strcpy(st[c++].var,temp);
        }
    }

}

int main() {
    char s[100];
    char temp[100];
    char d;
    int type=0;
    int j=0,k;
    for(int I=0; I<2; I++) {
        scanf("%[^\n]%c",s,&d);
        sep(s);
    }
    printf("expression\n");
    scanf("%[^\n]%c",s,&d);
    int flag=0;
    for(int I=0; I<strlen(s); I++) {
        if(flag==0) {

            if(isalpha(s[I])) {
                temp[j++]=s[I];

            }
            else {
                temp[j]='\0';

                j=0;
                for(k=0; k<c; k++) {

                    if(strcmp(temp,st[k].var)==0) {
                        if(type==0) {
                            type=st[k].type;
                        }
                        else {
                            if(st[k].type!=type) {
                                printf("invalid");
                                flag=1;
                                break;
                            }
                        }
                    }
                }
            }
        }

        else {

            break;
        }
    }
    if(flag==0) {
        printf("valid expression");
    }
}