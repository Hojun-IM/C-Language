#include <stdio.h>

int main() {
	int N[9], max, cnt=0, i;
	for(i=0; i<9; i++){
		scanf("%d", &N[i]);
	}
	max=0;
	for (i=0; i<9; i++){
		if(N[i]>max) {
			max=N[i];
			cnt=i+1;
		}
	}
	printf("%d %d", max, cnt);
    return 0;
}