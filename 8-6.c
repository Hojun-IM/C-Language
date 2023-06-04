#include <stdio.h>

int main() {
    int X, n=1;
    scanf("%d", &X);
    
    while(1){
        if((n-1)*n/2+1<=X && X<=n*(n+1)/2) break;
        n++;
    }
    if(n%2==0){
    	printf("%d/%d", X-n*(n-1)/2, (n+1)-(X-n*(n-1)/2));
	}
	else{
		printf("%d/%d", (n+1)-(X-n*(n-1)/2), X-n*(n-1)/2);
	}
    return 0;
}