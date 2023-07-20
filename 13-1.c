#include<stdio.h>

void sort(int *ptr, int len);

int main(void) {
	int i, n, num[1001];
	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	sort(num, n);
	for(i=0; i<n; i++){
		printf("%d\n", num[i]);
	}
    return 0;
}

void sort(int *ptr, int len){
	int temp, min, i, j;
	for(i=0; i<len-1; i++){
		min=i;
		for(j=i+1; j<len; j++){
			if(ptr[min]>ptr[j]) min=j;
		}
		temp=ptr[i];
		ptr[i]=ptr[min];
		ptr[min]=temp;
	}
}