#include <stdio.h>

int main() {
	char A[3], B[3];
	int i, result;
	scanf("%s %s", A, B);
	
	for(i=2; i>=0; i--){
		if(A[i]>B[i]) {
			for(i=2; i>=0; i--) printf("%c", A[i]);
			break;
		}
		else if(A[i]<B[i]) {
			for(i=2; i>=0; i--) printf("%c", B[i]);
			break;
		}
		else continue;
	}

	return 0;
}