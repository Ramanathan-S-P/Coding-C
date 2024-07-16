#include<stdio.h>
int main() {
    int row,col;
    scanf("%d",&row);
    scanf("%d",&col);
    char box[row+2][col+2];
    memset(box,'-',(row+2)*sizeof(box[col+2]));
    int n,m,k;
    scanf("%d",&k);
    for(int i=0; i<k; i++) {
        scanf("%d %d",&m,&n);
        box[m][n]='X';
        box[row+1][n]='H';
        box[m][0]='H';
    }
    for(int i=0; i<row; i++) {
        if(box[i+1][0]=='-') {
            box[i+1][0]='R';
        }
        if(box[i+1][col+1]=='-') {
            box[i+1][col+1]='R';
        }

        for(int j=0; j<col; j++) {
            if(box[0][j+1]=='-') {
                box[0][j+1]='C';
            }
            if(box[row+1][j+1]=='-') {
                box[row+1][j+1]='C';
            }
        }
    }
    for(int i=0; i<row+2; i++) {
        for(int j=0; j<col+2; j++) {
            printf("%c ",box[i][j]);

        }
        printf("\n");
    }
}