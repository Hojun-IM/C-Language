#include <stdio.h>

int convert(char *number, int base);

int main() {
    char number[100];
    int b, decimal;
    scanf("%s %d", number, &b);
    decimal = convert(number, b);
    
    printf("%d", decimal);
    return 0;
}

int convert(char *number, int base) {
    int i, decimal = 0, digit;
    
    for (i=0; number[i]!='\0'; i++) {
        if (number[i]>='0' && number[i]<='9') digit=number[i]-'0';
        else if (number[i] >= 'A' && number[i] <= 'Z') digit=number[i]-'A'+10;
        else if (number[i] >= 'a' && number[i] <= 'z') digit=number[i]-'a'+10;
        decimal = decimal * base + digit;
    }
    
    return decimal;
}