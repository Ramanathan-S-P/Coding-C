#include<stdio.h>
int main(){
char s[100000];
scanf("%[^\n]s",&s);
char * token=strtok(s,";");
char a[100][10000];

strcpy(a[0],token);
printf("%s",a[0]);


}