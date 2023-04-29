#include <stdio.h>
int main() {
	int sum=0, x, n, i, a, b;
	scanf("%d\n %d", &x, &n);
	for(i=1; i<=n; i++){
		scanf("%d %d", &a, &b);
		sum+=(a*b);
	}
	if(x==sum) printf("Yes");
	else printf("No");
	return 0;
}