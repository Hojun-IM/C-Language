#include <stdio.h>

int main() {
	int i, j, k, w, h, p, paper[100][100] = {0}, area=0;
	scanf("%d", &p);
	
	for(i=0; i<p; i++){
		scanf("%d %d", &w, &h);
		for(j=w; j<w+10; j++){
			for(k=100-h; k>(100-h)-10; k--){
				if(paper[k][j]==1) continue;
				else{
					paper[k][j]=1;
				}
			}
		}
	}
	
	for(i=0; i<100; i++){
		for(j=0; j<100; j++){
			if(paper[i][j]==1) area++;
		}
	}
	printf("%d", area);
	return 0;
}