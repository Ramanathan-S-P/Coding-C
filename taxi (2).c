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
t[i].amount=0;
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
scanf("\n%c",&Pp);
printf("\nDrop Point: ");
scanf("\n%c",&Dp);
printf("\nPickup Time: ");
scanf("\n%c",&Pt);

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
pf("\nPlease Enter valid choice 1 or 2 or 3....\n");
goto menu;
}
}
int getfreetaxi(char,char,int);
void booking(char pp,char dp,int pt){
int id= getfreetaxi(pp,dp,pt);
pf("\n free taxi is : taxi %d is allocated",id+1);
t[id].pic=pt-'0';
t[id].drop=abs(pp-dp)+t[id].pic;
t[id].amount=100+(abs(pp-dp)-5)*10;
t[id].total+=t[id].amount;
t[id].curpos=dp;
t[id].freetime=t[id].drop;
t[id].from=pp;
t[id].to=dp;
pf("pictime: %d\n dptime%d \n free time %d\n",t[id].pic,t[id].drop,t[id].freetime);
}
int cmp(const void *,const void *);
int getfreetaxi(char pp,char dp,int pt){
int min=INT_MAX;
int ear=INT_MAX;
int tax[4];
int ind=0;
for(int i=0;i<4;i++){
pf("%d free time of taxi %d",t[i].freetime,i+1);
if(t[i].freetime+abs(pp-t[i].curpos)<=pt){
pf("taxi %d enters ",i+1);
if(abs(t[i].curpos-pp)<=min){
min=abs(t[i].curpos-pp);
tax[ind++]=i;
}
}
}
pf("free taxis are before sort: \n");
for(int i=0;i<ind;i++){
printf("%d-%d\n",tax[i]+1,t[tax[i]].total);
}
qsort(tax,ind,sizeof(int),cmp);
pf("free taxis are after sort: \n");
for(int i=0;i<ind;i++){
printf("%d-%d\n",tax[i]+1,t[tax[i]].total);

}
return tax[0];
}
int  cmp(const void *a,const void *b){
int p=*(int *)a;
int  q=*(int *)b;
return t[p].total-t[q].total;
}
    