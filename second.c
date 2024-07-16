#include<limits.h>
#include <stdio.h>

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int largest = INT_MIN, second = INT_MIN;
printf("%d%d",largest , second);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("Largest: %d\nSecond: %d\n", largest, second);
}