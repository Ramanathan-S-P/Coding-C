#include <stdio.h>
#include <string.h>

void printNonRepeated(const char *str) {
    int freq[256] = {0}; // Assuming ASCII characters

    // Count frequency of each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Print characters that are not repeated
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            printf("%c ", str[i]);
        }
    }
}

int main() {
    char var[100],str[100];
    int i=0;
    int k=0;
    do{
    scanf("%c",&var[i]);
    if(isalpha(var[i])){
    str[k]=var[i];
    k++;
    }
    i++;
   }while(var[i-1]!='$');
    
    printf("Non-repeated characters: ");
    printNonRepeated(str);
    return 0;
}
