#include <stdio.h>

int main() {
	int s[31]={0}, num, i;
	for(i=1; i<=28; i++){
		scanf("%d", &num);
		s[num]=1;
	}
	for(i=1; i<=30; i++){
		if(s[i]!=1) printf("%d\n", i);
	}
    return 0;
}