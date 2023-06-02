#include <stdio.h>

int main() {
    int i, N, row=2;
    scanf("%d", &N);
    
    for(i=0; i<N; i++){
    	row+=(row-1);
	}
    printf("%d", row*row);
    return 0;
}