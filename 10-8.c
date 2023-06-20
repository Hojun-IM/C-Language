#include <stdio.h>

int main(void) {
	int a, b, c, res=0;

	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c) res=a+b+c;
	else{
		if((a>=b && a>c) || (a>b && a>=c)){
			if(a>=b+c) res=(b+c)*2-1;
			else res=a+b+c;
		}
		else if((b>=a && b>c) || (b>a && b>=c)){
			if(b>=a+c) res=(a+c)*2-1;
			else res=a+b+c;
		}
		else if((c>=a && c>b) || (c>a && c>=b)){
			if(c>=a+b) res=(a+b)*2-1;
			else res=a+b+c;
		}
	}
	printf("%d", res);
    return 0;
}