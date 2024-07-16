#include<stdio.h>
int main(){
char s[1000];
scanf("%s",&s);
int left=0;
int right=strlen(s)-1;
while(left<right){
if(s[left]!=s[right]){
break;
}
left++;
right--;
}
if(left-right==1||left==right){
printf("palindrome");
}
else{
printf("not a palindrome");
}
}