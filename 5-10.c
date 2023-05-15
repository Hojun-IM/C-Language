#include <stdio.h>

int main() {
	char dial[15];
	int i, time=0;
	scanf("%s", dial);
	for(i=0; dial[i]!='\0'; i++){
		if(dial[i]>=65 && dial[i]<=67) time+=3;
		else if(dial[i]>=68 && dial[i]<=70) time+=4;
		else if(dial[i]>=71 && dial[i]<=73) time+=5;
		else if(dial[i]>=74 && dial[i]<=76) time+=6;
		else if(dial[i]>=77 && dial[i]<=79) time+=7;
		else if(dial[i]>=80 && dial[i]<=83) time+=8;
		else if(dial[i]>=84 && dial[i]<=86) time+=9;
		else if(dial[i]>=87 && dial[i]<=90) time+=10;
		else time+=11;
	}
	printf("%d", time);
	return 0;
}