#include <stdio.h>

int main() {
	int N, M, i, j;
	scanf("%d %d", &N, &M);
	int arr1[N][M], arr2[N][M];
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			arr1[i][j] += arr2[i][j];
		}
	}
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("%d ", arr1[i][j]);
		}
		puts("");
	}
	return 0;
}