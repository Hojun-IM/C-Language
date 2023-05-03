#include <stdio.h>

int main() {
	int N, max, min, i, num;
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%d", &num);
		if(i==0){
			max=num;
			min=num;
		}
		else if(num>max) max=num;
		else if(num<min)min=num;
	}
	printf("%d %d", min, max);
    return 0;
}