#include<stdio.h>
#include<stdbool.h>
char ans[100][100];
int count[100];
int i=-1;
bool is(char *s){
for(int j=0;j<=i;j++){
if(!strcmp(ans[j],s)){
count[j]+=1;
return 1;
}

}
return 0;
}
int main() {
    char s[100];
    char ch;
    
    scanf("%[^\n]s",&s);
    

    char*tok=strtok(s," ");
    
    
    while(tok!=NULL) {
    if(!is(tok)){
        strcpy(ans[++i],tok);
        count[i]+=1;
        }
        tok=strtok(NULL," ");
    }
   int  max=count[0];
   int ind=0;
    for(int j=0;j<=i;j++){
    if(count[j]>max){
    max=count[j];
    ind=j;
    }
    printf("%s-%d\n",ans[j],count[j]);
    }
    printf("max-%d-%s\n",count[ind], ans[ind]);
    
}