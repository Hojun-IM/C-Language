#include <stdio.h>

int main() {
	int H, M;
	scanf("%d %d", &H, &M);
	if(M-45<0){
		M+=60-45;
		if(H-1<0) H=24;
		H--;
	}
	else M-=45;
	printf("%d %d", H, M);
    return 0;
}