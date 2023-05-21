#include <stdio.h>
#include <string.h>

int main() {
	int i, j, len, max=0, cnt[26]={0,};
	char word[1000001], letter=0;
	
	scanf("%s", word);
	len=strlen(word);
	
	for(i=0; i<len; i++) {
        if(word[i]>='a') cnt[word[i]-'a']++;
        else cnt[word[i]-'A']++;
    }
	for(i=0; i<26; i++){
		if(cnt[i]>max) {
			max=cnt[i];
			letter=i+'A';
		}
		else if(cnt[i]==max) letter='?';
	}
	printf("%C", letter);

	return 0;
}