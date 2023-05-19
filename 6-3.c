#include <stdio.h>

int main() {
	int n, i, j, k;
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		for (j=n-i; j>0; j--)printf(" ");
		for (k=2*i-1; k>0; k--)printf("*");
		printf("\n");
	}
	for (i=n-1; i>0; i--) {
		for (j=n-i; j>0; j--)printf(" ");
		for (k=2*i-1; k>0; k--)printf("*");
		printf("\n");
	}
	return 0;
}