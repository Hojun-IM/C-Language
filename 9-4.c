#include <stdio.h>

int main() {
    int N, i, j, a[1001], cnt, prime=0;
    scanf("%d", &N);
    
    for(i=0; i<N; i++){
    	cnt=0;
    	scanf("%d", &a[i]);
    	for(j=1; j<=a[i]; j++){
    		if(a[i]%j==0) cnt++;
		}
		if(cnt==2) a[i]=-1;
	}
	for(i=0; i<N; i++){
		if(a[i]==-1) prime++;
	}
	printf("%d", prime);
    return 0;
}