#include <stdio.h>

int main() {
	int i, cnt=0;
	char word[100];
	scanf("%s", word);
	for(i=0; word[i]!='\0'; i++){
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}