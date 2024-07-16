#include<stdio.h>
void dead(char *str) {
    char Freq[127]= {0};
    for (int I=0; I<strlen(str); I++) {
        Freq[(int)str[I]]++;
    }
    for(int I=0; I<strlen(str); I++) {
        if(Freq[(int)str[I]]==1) {
            printf("%c is  duplicate",str[I]);
        }
    }
}
int main() {
    char str[100];
    char ch;
    char s[100];
    int ind=0;
    do {
        scanf("%[^\n]%c",str,&ch);
        for(int I=0; I<strlen(str); I++) {
            if(isalpha(str[I])) {
                s[ind++]=str[I];
            }
        }
    } while((char)str[0]!='$');
    dead(s);
    return 0;
}