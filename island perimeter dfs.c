#include<stdio.h>
int dfs(int mat[4][4],int dp [4][4],int i,int j){
printf("%d %d=",i,j);
if(i<0||i>3||j<0||j>3){
printf("out of bound\n");
return 1;
}
if(mat[i][j]==0){
return 1;
}
if(dp[i][j]){
printf("visited\n");
return 0;
}
printf("not visited\n");
dp[i][j]=1;


int perm=0;
 perm+=dfs(mat,dp,i,j-1);
perm+=dfs(mat,dp,i,j+1);
perm+=dfs(mat,dp,i-1,j);
perm+=dfs(mat,dp,i+1,j);

return perm;
}

int main(){
int dp[4][4]={0};
int mat[4][4];
for(int i=0;i<4;i++){
for(int j=0;j<4;j++){
scanf("%d",&mat[i][j]);
}
}
int i,j;
int flag=0;
for( i=0;i<4;i++){
for(j=0;j<4;j++){
if(mat[i][j]==1){
int perm=0;
perm =dfs(mat,dp,i,j);
printf("%d",perm);
return 0;

}
}

}
return 0;

}