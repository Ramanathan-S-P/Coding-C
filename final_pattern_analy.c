#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int indi_i=0,indi_j=0,indl_i=0,indl_j=0;
int indd_i=0,indo_i=0,indo_j=0;
char iden[100][100];
char *keywd[]= {"include","void","main","int"};
char operator[8]= {'+','-','/','*','=','<','>','%'};
char delimiter[8]= {';',':','(',')','{','}','[',']'};
int uindi_i=0,uindl_i=0,uindo_i=0,uindd_i=0;
int indiden=0,indkey=0;
char delim[100];
char lit[100][100];
char op[100][100];
int isop(char c) {
    for (int I=0; I<8; I++) {
        if(c==operator[I]) {

            return 1;
            break;
        }
    }
    return 0;
}
int isdel(char c) {
    for(int I=0; I<8; I++) {
        if(c==delimiter[I]) {
            return 1;
            break;
        }
    }
    return 0;
}
int isiden(char c) {
    if(isalpha(c)||isdigit(c)||c=='.'||c=='_') {
        return 1;
    }
    else {
        return 0;

    }

}

void lex(char *str) {
    int I=0;
    while(str[I]!='\0') {
        if(isiden(str[I])) {
            while(isiden(str[I])) {
                iden[indi_i][indi_j++]=str[I++];
            }
            iden[indi_i][indi_j]='\0';
            indi_j=0;
            indi_i++;
        }

        else  if(str[I]=='"') {
            lit[indl_i][indl_j++]=str[I];
            I++;
            while(str[I]!='"') {
                lit[indl_i][indl_j++]=str[I++];
            }
            lit[indl_i][indl_j]='"';
            indl_i++;
            indl_j=0;
            I++;
        }
        else  if(isop(str[I])) {
            while(isop(str[I]) ) {
                op[indo_i][indo_j++]=str[I++];
            }
            indo_j=0;
            indo_i++;
        }
        else if(isdel(str[I])) {
            delim[indd_i++]=str[I++];
        }
        else {
            I++;
        }
    }
}





int main()
{
    char str[100];
    char uniqiden[100][100],uniqkeywd[100][100],uniqiden2[100][100];
    char uniqlit[100][100];
    char uniqdelim[100];
    char uniqop[100][100];
    char ch;

do{
    scanf("%[^\n]%c",str,&ch);
    lex(str);
  }
   while((char)str[0]!='$');


    char mark1[100]= {0};
    for(int I=0; I<indi_i; I++) {
        if(mark1[I]==0) {
            strcpy(uniqiden[uindi_i++],iden[I]);
        }
        for(int j=I+1; j<indi_i; j++) {
            if(!strcmp(iden[I],iden[j])) {
                mark1[j]=1;
            }
        }
    }
    int flag=0;
    for(int I=0; I<uindi_i; I++) {
        for(int j=0; j<4; j++) {
            if(!strcmp(keywd[j],uniqiden[I])) {
                strcpy(uniqkeywd[indkey++],uniqiden[I]);
               
                flag=1;
            break;

            }
        }
        if(flag==0) {
            strcpy(uniqiden2[indiden++],uniqiden[I]);
        }
        flag=0;
    }
    char mark2[100]= {0};
    for(int I=0; I<indl_i; I++) {
        if(mark2[I]==0) {
            strcpy(uniqlit[uindl_i++],lit[I]);
        }
        for(int j=I+1; j<indl_i; j++) {
            if(!strcmp(lit[I],lit[j])) {
                mark2[j]=1;
            }
        }
    }
    char mark3[100]= {0};
    for(int I=0; I<indd_i; I++) {
        if(mark3[I]==0) {
            uniqdelim[uindd_i++]=delim[I];
        }
        for(int j=I+1; j<indd_i; j++) {
            if(delim[I]==delim[j]) {
                mark3[j]=1;
            }
        }
    }
    char mark4[100]= {0};
    for(int I=0; I<indo_i; I++) {
        if(mark4[I]==0) {
            strcpy(uniqop[uindo_i++],op[I]);
        }
        for(int j=I+1; j<indo_i; j++) {
            if(!strcmp(op[I],op[j])) {
                mark4[j]=1;
            }
        }
    }
    printf("\nkeywords are:");
    for(int I=0; I<indkey; I++) {
        printf("\n%s",uniqkeywd[I]);
    }
    printf("\nidentifiers are:");
    for(int I=0; I<indiden; I++) {
        printf("\n%s",uniqiden2[I]);
    }
    printf("\nliterals are:");
    for(int I=0; I<uindl_i; I++) {
        printf("\n%s",uniqlit[I]);
    }
    printf("\ndelimiters are:");
    for(int I=0; I<uindd_i; I++) {
        printf("\n%c",uniqdelim[I]);
    }
    printf("\noperators are:");
    for(int I=0; I<uindo_i; I++) {
        printf("\n%s",uniqop[I]);
    }
    return 0;
}



