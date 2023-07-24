#include <stdio.h>

void sort(int [], int);

int main() {
	int i, n, k, a[10001];
	
	scanf("%d %d", &n, &k);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	sort(a, n);
	
	printf("%d", a[k-1]);
	
    return 0;
}

void sort(int a[], int len){
	int max, temp, i, j;
	for(i=0; i<len; i++){
		max=i;
		for(j=i+1; j<len; j++){
			if(a[max]<a[j]) max=j;
		}
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	}
}