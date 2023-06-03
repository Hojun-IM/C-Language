#include <stdio.h>

int main() {
    int N, a=1, cnt=1;
    scanf("%d", &N);
    
    while(1){
		if(N-a<=0) break;
		N-=a;
		a=cnt*6;
		cnt++;
	}
	printf("%d", cnt);
    return 0;
}