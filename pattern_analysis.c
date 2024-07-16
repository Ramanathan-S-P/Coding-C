#include<stdio.h>
#include<string.h>
#include<ctype.h>
char kw[100][100],iden[100][100];
char op[100][100],lit[100][100],delim[100];
char con[100][100];
char operator[]= {'+','-','*','/','%','=','>','<'};
char delimiter[]= {'(',')','{','}',':',';','[',']'};
char *keywd[100]= {"include","void","main","int","float"};
char newkeywd[100][100];
int indk_i=0,indk_j=0;
int indd_i=0;
int indo_i=0,indo_j=0;
int indl_i=0,indl_j=0;
int iskey(char c) {
    if(isalpha(c)||isdigit(c)||c=='_'||c=='.') {

        return 1;
    }
    else {
        return 0;
    }
}
int isop(char c) {
    for(int i=0; i<8; i++) {
        if(operator[i]==c) {
            return 1;
        }

    }
    return 0;
}

int isdel(char c) {
    for(int I=0; I<8; I++) {
        if(c==delimiter[I]) {
            return 1;
        }
    }


    return 0;

}


void lex(char *str) {
    int i=0;
    while(str[i]!='\0') {

        if(iskey(str[i])) {

            while(iskey(str[i])) {
                kw[indk_i][indk_j++]=str[i++];
            }
            kw[indk_i][indk_j]='\0';
            indk_i++;
            indk_j=0;
        }
        else if(isdel(str[i])) {

            delim[indd_i++]=str[i++];
        }
        else if(isop(str[i])) {

            while(isop(str[i])) {
                op[indo_i][indo_j++]=str[i++];
            }
            op[indo_i][indo_j]='\0';
            indo_i++;
            indo_j=0;
        }
        else if(str[i]=='"') {



            lit[indl_i][indl_j++]='"';
            i++;
            while(str[i]!='"') {
                lit[indl_i][indl_j++]=str[i++];
            }
            lit[indl_i][indl_j++]='"';
            lit[indl_i][indl_j]='\0';
            i++;
            indl_i++;
            indl_j=0;
        }
        else {

            i++;
        }
    }


}



int main() {
    char str[100][100];
    int i=-1;
    char c;
    while(1) {
        i++;
        scanf("%[^\n]%c",str[i],&c);
        if((char)str[i][0]=='$') {
            break;
        }
    }
    for(int I=0; I<i; I++) {
        lex(str[I]);
    }
    char mark[100]= {0};
    char uniqkey[100][100];
    int count3=0;
    for(int I=0; I<indk_i; I++) {
        if(mark[I]==0) {
            strcpy(uniqkey[count3++],kw[I]);
            for(int j=I+1; j<indk_i; j++) {
                if(!strcmp(kw[I],kw[j])) {
                    mark[j]=1;
                }
            }
        }
    }
    char mark1[100]= {0};
    char uniqdelim[100];
    int count4=0;
    for(int I=0; I<indd_i; I++) {
        if(mark1[I]==0) {
            uniqdelim[count4++]=delim[I];
            for(int j=I+1; j<indd_i; j++) {
                if(delim[I]==delim[j]) {
                    mark1[j]=1;
                }
            }
        }
    }
    char mark2[100]= {0};
    char uniqop[100][100];
    int count5=0;
    for(int I=0; I<indo_i; I++) {
        if(mark2[I]==0) {
            strcpy(uniqop[count5++],op[I]);
            for(int j=I+1; j<indo_i; j++) {
                if(!strcmp(op[I],op[j])) {
                    mark2[j]=1;
                }
            }
        }
    }
    char mark3[100]= {0};
    char uniqlit[100][100];
    int count6=0;
    for(int I=0; I<indl_i; I++) {
        if(mark3[I]==0) {
            strcpy(uniqlit[count6++],lit[I]);
            for(int j=I+1; j<indl_i; j++) {
                if(!strcmp(lit[I],lit[j])) {
                    mark3[j]=1;
                }
            }
        }
    }

    printf("delimiters are :");
    for(int I=0; I<count4; I++) {
        printf("%c",uniqdelim[I]);
    }

    printf("\noperators are: ");
    for(int I=0; I<count5; I++) {
        printf("%s ",uniqop[I]);
    }
    int count=0;
    int count1=0;
    for(int I=0; I<count3; I++) {
        for(int j=0; j<5; j++) {
            if(!strcmp(keywd[j],uniqkey[I])) {
                strcpy(newkeywd[count++],uniqkey[I]);
            break;
            }
            else {
                strcpy(iden[count1++],uniqkey[I]);
break;
                        }
        }
    }
    printf("\nkeywords are: ");
    for (int I=0; I<count; I++) {
        printf("%s ",newkeywd[I]);
    }
    printf("\nidentifiers are: ");
    for (int I=0; I<count1; I++) {
        printf("%s ",iden[I]);
    }
    printf("\nliterals are : ");
    for (int I=0; I<count6; I++) {
        printf("%s ",uniqlit[I]);
    }


    return 0;


}
    