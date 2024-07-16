#include<stdio.h>
int isvowel(char c){
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
return 1;
}
return 0;
}
int main(){
char s[100];
scanf("%s",&s);
int len=strlen(s);
int  i=0;
int j=len-1;
while(i<j){
while(!isvowel(s[i])&&i<len&&i<j){
i++;
}

while(!isvowel(s[j])&&j>=0&&i<j){
j--;
}
printf("%c-%c\n",s[i],s[j]);
char temp=s[i];
s[i]=s[j];
s[j]=temp;
i++;
j-- ;
}

printf("%s",s);
}