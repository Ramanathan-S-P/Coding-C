#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct typ {
    int type;
    char var[50];
} st[50];
int c=0;
int ind=0;
int type=0;
void typchk(char *str) {
    char temp[100];
    int I=0;
    while(isalpha(str[I])) {
        temp[ind++]=str[I++];
    }
    temp[ind]='\0';
    ind=0;
    I++;
    if(!strcmp(temp,"int")) {
        type=1;
    }
    else
    {
        type=2;
    }
    for(I; I<strlen(str); I++) {
        while(isalpha(str[I])) {
            temp[ind++]=str[I++];
        }
        temp[ind]='\0';
        ind=0;
        I++;
        st[c].type=type;
        strcpy(st[c++].var,temp);
    }
}



int main()
{
    char str[100];
    int n;
    char ch;
    int ind=0;
    int type=0;
    char temp[100];
    scanf("%d%c",&n,&ch);
    for(int I=0; I<n; I++) {
        scanf("%[^\n]%c",str,&ch);
        typchk(str);
    }
    scanf("%[^\n]%c",str,&ch);
    int flag=0;
    for(int I=0; I<strlen(str); I++) {
        if(flag==0) {
            if(isalpha(str[I])) {
                while(isalpha(str[I])) {
                    temp[ind++]=str[I++];
                }
                temp[ind]='\0';
                ind=0;
                for(int I=0; I<c; I++) {
                    if(! strcmp (temp,st[I].var)) {
                        if(type==0) {
                            type=st[I].type;
                        }
                        else {
                            if(st[I].type!=type) {
                                flag=1;
                                printf("invalid");
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
        printf("valid");
    }
    return 0;
}


    