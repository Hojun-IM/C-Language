#include <stdio.h>

int main() {
    int n, temp, num=665, cnt=0;
    scanf("%d", &n);

    while(cnt!=n){
        num++;
        temp=num;
        while(temp!=0){
            if(temp%1000==666){
                cnt++;
                break;
            }
            else temp /= 10;
        }
    }
    
    printf("%d", num);
    return 0;
}