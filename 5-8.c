#include <stdio.h>

int main() {
	char s[1000001];
	int i, cnt=0;
	scanf("%[^\n]s", s);
	
	for(i=0; s[i]!='\0'; i++){
		if(s[i]==' ') {
			if(i==0 && s[i]==' ' && s[i+1]=='\0') {
				printf("%d", cnt);
				return 0;
			}
			if (i!=0 && s[i+1]!='\0') cnt++;
		}
	}
	printf("%d", ++cnt);
	return 0;
}