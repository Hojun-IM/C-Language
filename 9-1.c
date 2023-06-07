#include <stdio.h>

int check(int a, int b);

int main() {
    int a, b, result;
    
    while(1){
	scanf("%d %d", &a, &b);
	if(a==0 && b==0) return 0;
    result=check(a, b);
    if(result==1) printf("factor\n");
    else if(result==2) printf("multiple\n");
    else printf("neither\n");
    }
    
    return 0;
}

int check(int a, int b){
	int result;
	if(b%a==0) result=1;
	else if(a%b==0) result=2;
	else result=3;
	
	return result;
}