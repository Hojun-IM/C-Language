#include <stdio.h>

int main() {
	int i, N, M=0;
	double average=0, grade[1000];
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%lf", &grade[i]);
		if(M<grade[i]) M=grade[i];
	}
	for(i=0; i<N; i++){
		grade[i]=grade[i]/M*100;
		average+=grade[i];
	}
	average/=N;
	printf("%g", average);
	return 0;
}