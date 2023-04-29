#include <stdio.h>
int main() {
	int n, j;
	scanf("%d", &n);
	for(j=1; j<10; j++)
		printf("%d * %d = %d\n", n, j, n*j);
	return 0;
}