#include <stdio.h>

int main() {
	char word[100], alphabet[26];
	int i, j, location;
	for(i=0; i<26; i++){
		alphabet[i]=-1;
	}
	scanf("%s", word);

	for(i=0; word[i]!='\0'; i++){
		for(j=0; j<26; j++){
			if(word[i]==j+97 && alphabet[j]){
				alphabet[j]=i;
				break;
			}
		}
	}
	for(i=0; i<26; i++){
		printf("%d ", alphabet[i]);
	}

	return 0;
}