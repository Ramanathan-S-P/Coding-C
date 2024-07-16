#include<stdio.h>
int main(){
/*implement the same for each parenthesis remove from strin
g and repeat same in bfs for no 
recursion of states with visited set so that 
u can get multiple answers*/
char s[100];
scanf("%s",&s);
int l=strlen(s);
int close=0;
int open=0;
for(int i=0,j=l-1;i<l;i++,j--){
if(s[i]=='('){
open+=1;
}
if(s[i]==')'){
open-=1;
}
if(s[j]==')'){
close+=1;
}
if(s[j]=='('){
close-=1;
}
if(open<0){
s[i]='-';
open=0;
}
if(close<0){
s[j]='-';
close=0;
}
}
for(int i=0;i<l;i++){
if(s[i]=='-'){
continue;
}
else{
printf("%c",s[i]);
}
}
}