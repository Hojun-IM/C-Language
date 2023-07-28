#include <stdio.h>
#include <stdlib.h>

typedef struct cor{
	int x;
	int y;
} Cor, *CorPtr;

int compare1(const void* a, const void* b);
int compare2(const void* a, const void* b);

int main(){
	int n;
	scanf("%d", &n);
	Cor cor[100000]={0, 0};
	
	for(int i=0; i<n; i++){
		scanf("%d %d", &cor[i].x, &cor[i].y);
	}
	
	qsort(cor, n, sizeof(Cor), compare1);
	
	for(int i=0; i<n; i++){
		printf("%d %d\n", cor[i].x, cor[i].y);
	}
	return 0;
}

int compare1(const void* a, const void* b){
	CorPtr i = (CorPtr)a;
	CorPtr j = (CorPtr)b;
		
	if(i->x < j->x) return -1;
	else if(i->x > j->x) return 1;
	return compare2(i, j);
}

int compare2(const void* a, const void* b){
	CorPtr i = (CorPtr)a;
	CorPtr j = (CorPtr)b;
	
	if(i->y < j->y) return -1;
	else if(i->y > j->y) return 1;
	return 0;
}