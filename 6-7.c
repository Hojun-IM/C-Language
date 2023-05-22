#include <stdio.h>

int main() {
	int C, N, i, j, grade[1001], cnt;
	double average, per;
	scanf("%d", &C);
	
	for(i=0; i<C; i++){
		per=0;
		average=0;
		cnt=0;
		scanf("%d", &N);
		for(j=0; j<N; j++){
			scanf("%d", &grade[j]);
			average+=grade[j];
		}
		average/=N;
		for(j=0; j<N; j++){
			if(grade[j]>average) cnt++;
		}
		per=((double)cnt/(double)N) *100.0;
		printf("%.3lf%%\n", per);	
	}
	return 0;
}