#include <stdio.h>
int main() {
	int i, a, b;
	for(;;){
		scanf("%d %d", &a, &b);
		if(a==0 && b==0) break;
		printf("%d\n", a+b);
	}
	return 0;
}