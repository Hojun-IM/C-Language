#include <stdio.h>

int main() {
	int i, j, a[10], num, cnt, result=0;
	for(i=0; i<10; i++){
		scanf("%d", &num);
		a[i]=num%42;
	}
	for(i=0; i<10; i++){
		cnt=0;
		for(j=i+1; j<10; j++){
			if(a[i] == a[j]) cnt++;
		}
		if(cnt==0) result++;
	}
	printf("%d ", result);
    return 0;
}