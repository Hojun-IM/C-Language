#include <stdio.h>

int main() {
	int A, B, C, P;
	scanf("%d %d %d", &A, &B, &C);
	
	if(A==B && B==C) P=10000+(A*1000);
	else if(A==B && B!=C) P=1000+(A*100);
	else if(B==C && A!=B) P=1000+(B*100);
	else if(A==C && C!=B) P=1000+(C*100);
	else {
		if(A>B && A>C) P=A*100;
		else if(B>A && B>C) P=B*100;
		else P=C*100;
	}
	printf("%d", P);
    return 0;
}