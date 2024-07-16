#include<stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    int count=0;
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(a[i]==5) {
            count++;
        }
    }
    printf("%d\n",count);
    int z=n-count;
    if(count>9) {
        int r=count%9;
        int d=count-r;
        for(int i=0; i<d; i++) {
            printf("%d",5);
        }
        for(int i=0; i<z; i++) {
            printf("%d",0);
        }
    }
    else {
        for(int i=0; i<z; i++) {
            printf("%d",0);
        }

    }
}
//exact method

/*
int main() 
{ 
    int no_of_digits; 
    scanf("%d", &no_of_digits); 

    int no_of_5s = 0, no_of_0s = 0; 
    for(int i = 1; i <= no_of_digits; i++) 
    { 
        int digit; 
        scanf("%d", &digit); 

        no_of_5s += (digit == 5); 
        no_of_0s += (digit == 0); 
    } 

    if(no_of_0s == 0) 
    { 
        printf("-1\n"); 
    } 
    else if(no_of_5s < 9) 
    { 
        printf("0\n"); 
    } 
    else 
    { 
        int no_of_5s_in_number = (no_of_5s/9)*9; 
        for(int i = 1; i <= no_of_5s_in_number; i++) 
            printf("5"); 

        for(int i = 1; i <= no_of_0s; i++) 
            printf("0"); 
    } 

    return 0; 
}*/