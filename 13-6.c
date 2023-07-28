#include <stdio.h>
#include <stdlib.h>

int compare(const void*, const void*);

int main(){
	int num, cnt=0;
	int arr[10];
	scanf("%d", &num);
	
	for(int i=0; num!=0; i++){
		arr[i]=num%10;
		num/=10;
		cnt++;
	}
	qsort(arr, cnt, sizeof(int), compare);
	for(int i=0; i<cnt; i++){
		printf("%d", arr[i]);
	}
	
	return 0;
}

int compare(const void* a, const void* b){
	if(*(int*)a < *(int*)b) return 1;
	else if(*(int*)a > *(int*)b) return -1;
	return 0;
}