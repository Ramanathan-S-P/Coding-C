#include<stdio.h> 
int n;
int quant;
int p;
void find(int k){

int off=n-(k-1)*quant;
printf("%d",k+p*(off-1));
}
int main(){
printf("decks and piles");
int deck;

scanf("%d %d",&deck,&p);
for (int i=1;i<=p;i++){
int sum=i;
printf("pile: %d\n%d\n",i,i);
for(int j=2;j<=deck/p;j++){
sum+=p;
printf("%d\n",sum);

}
}

printf("\nenter position to see: ");
scanf("%d",&n);
 quant=deck/p;
int pile=n/quant;
int rem=n%quant;
if(rem!=0){
find(pile+1);
}
else{
find(pile);
}
}