#include <stdio.h>

int main() {
    int N, i, factor=2;
    scanf("%d", &N);
    
    if(N==1) return 0;
    
    while(1){
    	if(N/factor==0) break;
		if(N%factor==0) {
			printf("%d\n", factor);
			N/=factor;
		}
    	else factor++;
	}
    return 0;
}