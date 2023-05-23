#include <stdio.h>
#include <string.h>

int main() {
	char word[101];
	int i, cnt=0, len;
	
	scanf("%s", word);
	len=strlen(word);
	
	for(i=0; i<len; i++){
		if(word[i]=='c'){
			if(word[i+1]=='=' || word[i+1]=='-'){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if(word[i]=='d'){
			if( word[i+1]=='z' && word[i+2]=='='){
				cnt++;
				i+=2;
			}
			else if(word[i+1]=='-'){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if(word[i]=='l'){
			if(word[i+1]=='j'){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if(word[i]=='n'){
			if(word[i+1]=='j'){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if(word[i]=='s'){
			if(word[i+1]=='='){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if(word[i]=='z'){
			if(word[i+1]=='=' && word[i-1]!='d'){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else cnt++;
	}
	printf("%d", cnt);
	return 0;
}