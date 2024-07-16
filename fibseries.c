include <stdio.h>
int fibonacciSeries(i){
    if (i <= 1)
        return i;
    else
        return (fibonacciSeries(i - 1) + fibonacciSeries(i - 2));
}
int main(void) {
    
    int num = 10, i;
    for(i = 0; i < num; i ++){
        printf("%d ", fibonacciSeries(i));
    }   
    return 0;
}