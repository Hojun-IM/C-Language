#include <stdio.h>
#include <string.h>

int not_answer=0;

void w_check();

int main() {
	int i, N;
	
	scanf("%d", &N);
	for(i=0; i<N; i++){
		w_check();
	}
	printf("%d", N-not_answer);
	return 0;
}

void w_check(){
	char word[101], check[26]={0,};
	int i, j, k=0, len;
	scanf("%s", word);
	len=strlen(word);
	
	for(i=1; i<len; i++){
		if(word[i]!=word[i-1]){
			for(j=0; j<strlen(check); j++){
				if(word[i]==check[j]){
					not_answer++;
					return;
				}
			}
			check[k]=word[i-1];
			k++;
		}
	}
}