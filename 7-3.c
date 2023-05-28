#include <stdio.h>
#define row 5
#define col 15

int main() {
	int i, j;
	char arr[row][col]={NULL};
	
	for(i=0; i<row; i++){
			scanf("%s", arr[i]);
	}
	
	for(i=0; i<col; i++){
		for(j=0; j<row; j++){
			if(arr[j][i]==NULL) continue;
			printf("%c", arr[j][i]);
		}
	}
	return 0;
}