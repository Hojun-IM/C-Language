#include <stdio.h>

int length(char str[]);

int main() {
	int i, T, l;
	char word[1000], first, last;
	scanf("%d", &T);

	for(i=0; i<T; i++){
		scanf("%s", word);
		l = length(word);
		first = word[0];
		last = word[l-1];
		printf("%c%c\n", first, last);
	}
	return 0;
}

int length(char str[]){
	int cnt=0;
	while(str[cnt]!='\0') cnt++;
	return cnt;
}