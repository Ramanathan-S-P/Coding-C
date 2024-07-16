#include <stdio.h>
void main()
{
    int i, n, a[50], k[50],count=0, key,flag=0;
/* Array a[50] is used to store the elements. Array k[50] is used to find whether the marked as “most used” or “Least used”. If element in array k is set to 1 denotes it is marked, if not it denotes it is unmarked
Count is used to track whether all the element of array are called or not.
Flag is used for setting Most Used and Least Used.
*/
    printf("Enter the size of keyword set.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        k[i]=0;
    }
    while(count != n) 
    {
        printf("Enter a key:");
        scanf("%d",&key);
        printf("\n");
        for(i=0;i<n;i++)
        {
            if(a[i] == key) // If key is present in the array.
            {
                k[i]=1;
                printf("most used\n");
                flag=1;
                count++;
                break;
            }
        }
        if(flag == 0)
        {
            for(i=0;i<n;i++)
            {
                if(k[i] == 0)
                {
                    printf("least used\n");
                    k[i]=1;
                    a[i]=key;
                    count++;
                    break;
                }
            }
        } 
        flag=0;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
