#include<stdio.h>
int ans[4];
int top=-1;
int search (int  sub) {

    for(int i=0; i<=top; i++) {
       if(sub==ans[i]) {
            return 1;
        }
    }

    return 0;
}
int getind(int s) {
    for(int i=0; i<=top; i++) {
        if(s==ans[i]) {
        
            return i;
        }
    }
    return 0;
}
int flag=1;
int main() {
    int m;
    scanf("%d",&m);
    int a[m][2];
    for(int i=0; i<m; i++) {
    printf("elements in array\n");
    for(int i=0;i<=top;i++){
        printf("%d ",ans[i]);
        }
        printf("\n");
        scanf("\n%d %d",&a[i][0],&a[i][1]);
        int s=search(a[i][0]);
        int p=search(a[i][1]);
        
        printf("\n");
        if(s==0&&p==0) {
        printf("s==0&&p==0\n");
            ans[++top]=a[i][1];
            ans[++top]=a[i][0];
        }
        if(p==1&&s==0) {
        printf("p==1&&s==0\n");
            ans[++top]=a[i][0];
        }
        if(p==0&&s==1) {
        printf("p==0&&s==1\n");
            int ind=getind(a[i][0]);
            for(int i=top; i>=ind; i--) {
                ans[i+1]=ans[i];
            }
            ans[ind]=a[i][1];
            ++top;
        }
        if(s==1&&p==1) {
        printf("p==1&&s==1\n");
            int  x=getind(a[i][0]);
            int y=getind(a[i][1]);
            if(x<y) {
                int temp=ans[y];
                ans[y]=ans[x];
                ans[x]=temp;
            }
        }
    }
    for(int i=0;i<m;i++){
    int x=getind(a[i][0]);
    int y=getind(a[i][1]);
    if(x<y){
    printf("empty");
    flag=0;
    break;
    }
}
printf("\n");
if(flag==1){
for(int i=0;i<=top;i++){
printf("%d ",ans[i]);
}
}
}




    