#include <stdio.h>
int main() {
	int chess[6]={1, 1, 2, 2, 2, 8}, have[6], i;
	
	for(i=0; i<6; i++){
		scanf("%d", &have[i]);
		have[i]=chess[i]-have[i];
	}
	for(i=0; i<6; i++){
		printf("%d ", have[i]);	
	}
	return 0;
}