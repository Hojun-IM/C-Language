#include <stdio.h>

int main() {
	int i, N, v, num[100], cnt=0;
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%d", &num[i]);
	}
	scanf("%d", &v);
	for(i=0; i<N; i++){
		if(num[i]==v) cnt++;
	}
	printf("%d", cnt);
    return 0;
}