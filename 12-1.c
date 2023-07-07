#include <stdio.h>

int main() {
	int n, m, i, j, k, a[101], max=0;
	scanf("%d %d\n", &n, &m);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			for(k=j+1; k<n; k++){
				if(a[i]+a[j]+a[k]>max && a[i]+a[j]+a[k]<=m) max=a[i]+a[j]+a[k];
			}
		}
	}
	printf("%d", max);
	return 0;
}