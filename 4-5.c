#include <stdio.h>

int main() {
	int a, i, j, k, N, M, B[101]={ };
	scanf("%d %d", &N, &M);
	
	for(a=1; a<=M; a++){
		scanf("%d %d %d", &i, &j, &k);
		for(i; i<=j; i++) B[i]=k;
	}
	for(i=1; i<=N; i++){
		printf("%d ", B[i]);
	}
    return 0;
}