#include <stdio.h>
void main()
{
    int a[50],b[50],c[50],n,i,j,l,sum=0,k;
    float avg=0;
    printf("Enter the total number of elements:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        avg += a[i];
    }
    avg=avg/n;
    /* This loop is used for grouping of elements hence it starts with 1 and goes upto n-1*/
    for(i=1; i<n; i++)
    {
        for(k=0; k+i<n; k++)
        {
            /*
            The below for loop is used for grouping of elements. i.e, when i=1, this loop has sum as a
            single elment, i=2, this loop takes sum as for 2 elements taken as a pair. And it continues.
            */for(j=k; j<k+i; j++)
            {
                sum=sum+a[j];
            }
            if(avg == sum/i)
            {
                printf("\n");
                printf("Array 1\n");
                for(l=k; l<k+i; l++)
                {
                    printf("%d\t",a[l]);
                }
                printf("\n");
                printf("Array 2\n");
                for(l=0; l<k; l++)
                {
                    printf("%d\t",a[l]);
                }
                for(l=k+i; l<n; l++)
                {
                    printf("%d\t",a[l]);
                }
                return;
                /*return works same as exit. Since we have found the group, the program is being
                terminated. Since the return type of main is given void, simply return; is given*/
            }
            sum=0;
        }
    }

    /* The program comes to this region only if the equal average arrays are not possible*/
    printf("\nIt is not possible to split the given array.");
}