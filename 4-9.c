#include <stdio.h>

int main() {
	int N, M, basket[101], i, j, k, l, temp;
	for(k=1; k<=100; k++){
		basket[k] = k;
	}
	
	scanf("%d %d", &N, &M);
	
	for(k=1; k<=M; k++){
		scanf("%d %d", &i, &j);
		for(l=0; l<=(j-i)/2; l++){
			temp=basket[i+l];
			basket[i+l]=basket[j-l];
			basket[j-l]=temp;
		}
	}
	for(k=1; k<=N; k++){
		printf("%d ", basket[k]);
	}
	return 0;
}