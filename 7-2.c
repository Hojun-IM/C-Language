#include <stdio.h>

int main() {
	int i, j, row=1, col=1, arr[9][9]={0}, max=0;
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			scanf("%d", &arr[i][j]);
			if(arr[i][j]>max) {
				max=arr[i][j];
				row=i+1;
				col=j+1;
			}
		}
	}
	printf("%d\n%d %d", max, row, col);
	return 0;
}