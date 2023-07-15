#include <stdio.h>

int main() {
	char board[50][51];
	int n, m, i, j, a, b, cnt_B, cnt_W, min=5000;
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
			scanf("%s", &board[i]);	
	}
	
	for(i=0; i<n-7; i++){
		for(j=0; j<m-7; j++){
			cnt_B=0;
			cnt_W=0;
			for(a=i; a<i+8; a++){
				for(b=j; b<j+8; b++){
					if((a+b)%2==0){
						if(board[a][b]=='B') cnt_W++;
						else cnt_B++;
					}
					else{
						if(board[a][b]=='B') cnt_B++;
						else cnt_W++;
					}
				}
			}
			if(min>cnt_B) min=cnt_B;
			if(min>cnt_W) min=cnt_W;
		}
	}
	printf("%d", min);
	return 0;
}