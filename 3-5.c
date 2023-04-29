#include <stdio.h>

int main(void){
	int n, i;
	scanf("%d", &n);
	for(i=0; i<n/4; i++){
		printf("long ");
		if(i == n/4 -1) printf("int");
	}
	return 0;
}