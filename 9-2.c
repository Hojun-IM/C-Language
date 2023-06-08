#include <stdio.h>

int factor(int n, int k);

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    
    printf("%d", factor(N, K));
    return 0;
}

int factor(int n, int k){
	int i, cnt=0;
	
	for(i=1; i<=n; i++){
		if(n%i==0) cnt++;
		if(cnt==k) break;
	}
	if(i<=n) return i;
	else return 0;
}