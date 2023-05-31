#include <stdio.h>

void convert(int decimal, int base);

int main() {
    int N, B;
    scanf("%d %d", &N, &B);
    convert(N, B);    
    return 0;
}

void convert(int decimal, int base) {
    char num[100];
    int rem, i=0, j;
    
    while(decimal>0) {
        rem=decimal%base; 
        if(rem<10) num[i]=rem+'0';
        else num[i]=rem+'A'-10;      
        decimal /= base;
        i++;
    }
    
    for (j=i-1; j>=0; j--) {
        printf("%c", num[j]);
    }
}