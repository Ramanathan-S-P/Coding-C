#include<stdio.h>
//#define token(s1,s2) s1##s2
struct X_rays
{
    char string[100];

};
struct X_rays X[100];
int row,column,input,ROW,COL;
int adj1,adj2,count=0,atpos=0;
int main()
{

    scanf("%d %d",&row,&column);
    char atom_box[row+2][column+2];
    scanf("%d",&input);
    memset(atom_box,'-',sizeof(atom_box));
    for(int i=0; i<input; i++) {
        scanf("%d%d",&ROW,&COL);
        atom_box[ROW][COL]='X';
    }
    for(int i=0; i<row; i++)
        atom_box[i+1][0]=atom_box[i+1][row+1]='R';
    for(int i=0; i<column; i++)
        atom_box[0][i+1]=atom_box[column+1][i+1]='C';

    for(int row_i=0; row_i<row+2; row_i++)
    {
        for(int col_i=0; col_i<column+2; col_i++)

            printf("%c ",atom_box[row_i][col_i]);

        printf("\n");
    }

    int n_rays;
    scanf("%d",&n_rays);
    for(int i=0; i<n_rays; i++)
        scanf("%s",X[i].string);

    int number;
    char character;
    int flag1,flag2;
    for(int l=0; l<n_rays; l++)
    {
        character=X[l].string[0];
        number =X[l].string[1]-48;

        if(character=='R')
        {
// printf("—-R%d—-\n",number);
            for(int k=1; k<column+1; k++)
            {

                atpos=adj1=adj2=flag1=flag2=0;
                if(atom_box[number][k]=='X')
                    atpos=1;

                if(atom_box[number-1][k]=='X')
                    
                    
                    adj1=1;
                else
                {
                    for(int i=1; i<=number; i++)
                    {
                        if(atom_box[i][k]=='X')
                        
                        {
                        
                            flag1=1;
                            break;
                        }
                    }
                }

                if(atom_box[number+1][k]=='X')
                    adj2=1;
                else
                {
                    for(int j=number; j<row+1; j++)
                    {
                        if(atom_box[j][k]=='X')
                        {
                        
                            flag2=1;
                            break;
                        }
                    }
                }
// printf("adj1 %d adj2 %d flag1 %d flag2 %d atpos %d\n",adj1,adj2,flag1,flag2,atpos);
                if((adj1&&adj2) || atpos)
                {
                    printf("H-R%d\n",number);
                    atom_box[number][0]='H';
                    break;

                }
                else if((adj1 && flag2) || (adj2 && flag1))
                {
//printf("H-R%d\n",number);
                    atom_box[number][0]='H';
                    break;

                }

                else if(adj1 && !flag2)
                {
// printf("lower H-C%d\n",k);
                    atom_box[row+1][k]='H';
                    break;

                }
                else if (adj2 && !flag1)
                {
//printf("upper H-C%d\n",k);
                    atom_box[0][k]='H';
                    break;

                }
                else if(!adj1 && !adj2)
                    count+=1;

            }
//printf("count =%d\n",count);
            if(count==column)
                printf("NH-R%d\n",number);
            count=0;
        }

        if(character=='C')
        {
// printf("—-C%d—-\n",number);
            for(int k=1; k<row+1; k++)
            {
                atpos=adj1=adj2=flag1=flag2=0;
                if(atom_box[row+1-k][number]=='X')
                    atpos=1;
                if(atom_box[row+1-k][number-1]=='X')
                    adj1=1;
                for(int i=1; i<=number; i++)
                {

                    if(atom_box[row+1-k][i]=='X')
                    {
                        flag1=1;
                        break;
                    }
                }
                if(atom_box[row+1-k][number+1]=='X')
                    adj2=1;
                for(int j=number; j<column+1; j++)
                {
                    if(atom_box[row+1-k][j]=='X')
                    {
                        flag2=1;
                        break;
                    }
                }
//printf("adj1 %d adj2 %d flag1 %d flag2 %d atpos %d\n",adj1,adj2,flag1,flag2,atpos);
                if((adj1&&adj2) || atpos)
                {
// printf("H-C%d\n",number);
                    atom_box[row+1][number]='H';
                    break;

                }
                else if((adj1 && flag2) || (adj2 && flag1))
                {
// printf("H-C%d\n",number);
                    atom_box[row+1][number]='H';
                    break;

                }

                else if(adj1 && !flag2)
                {
//printf("right H-R%d\n",row+1-k);
                    atom_box[row+1-k][column+1]='H';
                    break;
                }
                else if (adj2 && !flag1)
                {
//printf("left H-R%d\n",row+1-k);
                    atom_box[row+1-k][0]='H';
                    break;
                }
                else if(!adj1 && !adj2)
                    count+=1;
            }
            if(count==row)
                printf("NH-C%d\n",number);//printf("%d\n",count);
            count=0;
        }

    }
    printf("\n");
    for(int row_i=0; row_i<row+2; row_i++)
    {
        for(int col_i=0; col_i<column+2; col_i++)
            printf("%c ",atom_box[row_i][col_i]);
        printf("\n");
    }
    return 0;
}