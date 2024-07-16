#include<string.h>
#include<stdio.h>
int main() {
    char a[100];
    scanf("%s",&a);
    int arr[26]= {0};
    int num[10]= {0};
    for(int i=0; i<strlen(a); i++) {
        if((65<=a[i]&&a[i]<=90)||(97<=a[i]&&a[i]<=122)){
        
        
        if(islower(a[i])) {
                if(arr[a[i]-'a']!=0) {
                    int j=1;
                    while(arr[(a[i]+j-'a')%26]!=0) {
                        j++;
                    }
                    arr[(a[i]+j-'a')%26]=1;
                    printf("%c",(a[i]+j-'a')%26+97);
                }
                else {
                    printf("%c",a[i]);
                    arr[a[i]-'a']=1;
                }
            }
            else {

                if(arr[a[i]-'a'+32]!=0) {
                    int j=1;
                    while(arr[(a[i]+j-'a'+32)%26]!=0) {
                        j++;
                    }
                    arr[(a[i]+j-'a'+32)%26]=1;
                    printf("%c",(a[i]+j-'a'+32)%26+65);
                }
                else {
                    printf("%c",a[i]);
                    arr[a[i]-'a'+32]=1;
                }
            }
        }

        else {
        
            if(num[a[i]-'0']!=0) {
                int k=1;
                while(num[(a[i]+k-'0')%10]!=0) {
                    k++;
                }
                num[(a[i]+k-'0')%10]=1;
                printf("%c",(a[i]+k-'0')%10+'0');
            }
            else {
                num[a[i]-'0']=1;
                printf("%c",a[i]);
            }


        }
    }
}



