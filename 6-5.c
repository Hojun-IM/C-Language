#include <stdio.h>
#include <string.h>

int main() {
	char word[101], cword[101];
	int len, i, check=1;
	scanf("%s", word);
	
	strcpy(cword, word);
	len=strlen(word);
	
	if(len%2==0){
		for(i=0; i<len/2; i++){
			if(word[i]!=cword[len-1-i]) check=0;
		}
	}
	else{
		for(i=0; i<len/2-1; i++)
			if(word[i]!=cword[len-1-i]) check=0;
	}
	
	printf("%d", check);
	return 0;
}