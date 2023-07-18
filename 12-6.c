#include <stdio.h>

int main() {
    int n, cnt=0;
    scanf("%d", &n);

	if(n==3 || n==5){
        printf("1");
        return 0;
    }
    else if(n==7 || n==4){
        printf("-1");
        return 0;
    }

    while(n>=5) {
        cnt=n/5;
        n%=5;
    }
 
    if(n==1 || n==3) printf("%d", cnt+1);
    else if(n==2 || n==4) printf("%d", cnt+2);
    else if(n%3!=0 || n%5!=0) printf("-1");
    else printf("%d", cnt);

    return 0;
}