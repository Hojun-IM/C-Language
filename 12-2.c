#include <stdio.h>

int main() {
	int i, n, m, sum;
	scanf("%d", &n);
	for(i=1; i<n; i++){
		m=i;
		sum=i;
		while(m>0){
			sum+=(m%10);
			m/=10;
		}
		if(sum==n) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}