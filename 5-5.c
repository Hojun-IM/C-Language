#include <stdio.h>

int main() {
	int i, sum=0, N;
	char num[100];
	scanf("%d", &N);
	scanf("%s", num);
	for(i=0; i<N; i++){
		sum+=num[i]-'0';
	}
	printf("%d", sum);
	return 0;
}