#include<stdio.h>

void sort(int *ptr, int len);

int main(void) {
	int i, n[5], sum=0, mean, median;
	
	for(i=0; i<5; i++){
		scanf("%d", &n[i]);
		sum+=n[i];
	}
	mean=sum/5;
	sort(n, 5);
	median=n[5/2];
	printf("%d\n%d", mean, median);
    return 0;
}

void sort(int *ptr, int len){
	int temp, min, i, j;
	for(i=0; i<len-1; i++){
		min=i;
		for(j=i+1; j<len; j++){
			if(ptr[min]<ptr[j]) min=j;
		}
		temp=ptr[min];
		ptr[min]=ptr[i];
		ptr[i]=temp;
	}
}