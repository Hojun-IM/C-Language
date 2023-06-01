#include <stdio.h>

void change(int money);
int changes[4];

int main() {
    int i, T, C;
    
	scanf("%d", &T);
    for(i=0; i<T; i++){
    	scanf("%d", &C);
    	change(C);
	}
    return 0;
}

void change(int money) {
    int i, coin;

	changes[0]=money/25;
	money%=25;
	changes[1]=money/10;
	money%=10;
	changes[2]=money/5;
	money%=5;
	changes[3]=money/1;

	for(i=0; i<4; i++){
    	printf("%d ", changes[i]);
	}
	printf("\n");
}