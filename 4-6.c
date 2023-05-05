#include <stdio.h>

int main() {
	int a, i, j, temp, N, M, B[101]={ };
	scanf("%d %d", &N, &M);
	for(a=1; a<=100; a++){
		B[a]=a;
	}
	for(a=1; a<=M; a++){
		scanf("%d %d", &i, &j);
		temp=B[i];
		B[i]=B[j];
		B[j]=temp;
	}
	for(i=1; i<=N; i++){
		printf("%d ", B[i]);
	}
    return 0;
}