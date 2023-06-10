#include <stdio.h>

int main() {
    int M, N, i, j, sum=0, cnt, a[10001]={0}, k=0, min;
    scanf("%d\n%d", &M, &N);
    
    for(i=M; i<=N; i++){
    	cnt=0;
    	for(j=1; j<=i; j++){
    		if(i%j==0) cnt++;
		}
		if(cnt==2) {
			sum+=i;
			a[k++]=i;
		}
	}
	for(i=0; i<=k; i++){
		if(i==(k) && a[i]==0) {
			printf("-1");
			return 0;
		}
		if(a[i]==0) continue;
		else break;
	}
	min=a[0];
	for(i=1; i<k; i++){
		if(min>a[i]) min=a[i];
	}
	
	printf("%d\n%d", sum, min);
    return 0;
}