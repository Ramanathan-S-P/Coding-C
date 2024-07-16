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
scanf("%d",&n);
for(int I=0;I<n;I++){
scanf("%[^\n]%c",str,&ch);
}