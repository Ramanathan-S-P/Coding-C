#include<stdio.h>

int main()
{
char inp[100][100];
int reg=1;
for(int I=0;I<2;I++){
scanf("%s",&inp[I]);
}
for(int I=0;I<2;I++){
printf("Load R%d %c\n",reg++,inp[I][2]);
printf("Load R%d %c\n",reg++,inp[I][4]);
switch(inp[I][3]){
case '+':

printf("ADD R%dR%d\n",reg-2,reg-1);
break;
case '-':

printf("SUB R%dR%d\n",reg-2,reg-1);
break;
case '*':

printf("MUL R%dR%d\n",reg-2,reg-1);
break;
case '/':

printf("DIV R%dR%d\n",reg-2,reg-1);
break;

}
printf("Store R%d\n",reg-2);
}
}
