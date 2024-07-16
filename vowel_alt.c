#include<stdio.h>
int main(){
char s[]={'h','e','l','l','o'};
char vowel[5];
char  ind[5];
int  p=0;
for(int i=0;i<strlen(s);i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'){
vowel[p]=s[i];
ind[p]=i;
p++;
}
}
for(int i=0,j=p-1;i<p;i++,j--){
s[ind[i]]=vowel[j];
}
for(int i=0;i<strlen(s);i++){
printf("%c",s[i]);
}
}