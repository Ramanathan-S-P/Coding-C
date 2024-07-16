#include<stdio.h>
int main(){
char s[100];
char ans[100];
scanf("%s",&s);
int n;
scanf("%d",&n);

int ind=0;
int inc=2*(n-1);
int len=strlen(s);
if(n==1||n==len){
printf("%s",s);
return 0;
}
for(int i=0;i<n;i++){
int j=i;
while(j<len){
ans[ind++]=s[j];
if(i==0||i==n-1){
j+=inc;
}
else{
j+=inc-(2*i);
if(j<len){
ans[ind++]=s[j];
j+=2*i;
}
}
}
}
ans[ind]='\0';
printf("%s",ans);
}
