#include <stdio.h>

int main() {
	char s[20];
	int i, j, k, T, R;
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		scanf("%d %s", &R, &s);
		for(j=0; s[j]!='\0'; j++){
			for(k=0; k<R; k++){
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}