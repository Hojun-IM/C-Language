#include <stdio.h>

int main() {
    int N, i, j, cnt, sum, arr[100000]={0};
    while(1){
	    scanf("%d", &N);
	    if(N==-1) return 0;
		cnt=0, sum=0;
		
	    for(i=1, j=0; i<N; i++){
			if(N%i==0){
				arr[j++]=i;
				cnt++;
				sum+=i;
			}
		}
		if(sum==N){
			printf("%d = %d", N, arr[0]);
			for(i=1; i<cnt; i++) printf(" + %d", arr[i]);
			puts("");
		}
		else printf("%d is NOT perfect.\n", N);
	}
    return 0;
}