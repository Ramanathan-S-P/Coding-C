#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define pf printf
#define sf scanf
void booking(char ,char ,int);
static int id;
struct taxi{
int taxino;
char from,to;
char curpos;
int freetime;
int pic,drop;
int amount;
int total;
}t[5];
int main(){
for(int i=0;i<4;i++){
t[i].taxino=i+1;
t[i].curpos='A';
t[i].total=0;
t[i].freetime=0;
}
char Custid,Pt;
char Pp,Dp;
int choice;
menu:
printf("\n\t\tWelcome OnBoard\t\t\n");
printf("1-Book Taxi\n2-Print Details\n3-Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("\n");
switch(choice){
case 1:
det:
printf("\nCustomer Id: ");
getchar();
scanf("%c",& Custid);
printf("\nPickup Point: ");
getchar();
scanf("%c",&Pp);
printf("\nDrop Point: ");
getchar();
scanf("%c",&Dp);
printf("\nPickup Time: ");
getchar();
scanf("%c",&Pt);

if(!isdigit(Custid)||!isalpha(Pp)||!isalpha(Dp)||!isdigit(Pt)){
pf("\n Enter valid choice \n");
goto det;
}
else{
booking(Pp,Dp,Pt);
}
goto menu;
case 2:
printf("2");
goto menu;
case 3:
return 0;
default:
pf("\nPlease Enter valid choice 1 or 2....\n");
goto menu;
}
}
int getfreetaxi(char,char,int);
void booking(char pp,char dp,int pt){
int id= getfreetaxi(pp,dp,pt);
}
int getfreetaxi(char pp,char dp,int pt){
int min=INT_MAX;
int ear=INT_MAX;
int tax[4];
int ind=0;
for(int i=0;i<4;i++){
if(t[i].freetime<=pt){
if(abs(t[i].curpos-pp)<=min){
min=abs(t[i].curpos-pp);
tax[ind++]=i+1;
}
}
}
pf("free taxis are\n");
for(int i=0;i<ind;i++){
if(
}
return 0;
}

    