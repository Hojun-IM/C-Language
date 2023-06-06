#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main() {
    int i, add=0, len, sum=0;
    char A[10002]={0}, B[10002]={0}, result[10003]={0};
    scanf("%s %s", A, B);
    reverse(A);
    reverse(B);
    len=strlen(A)>strlen(B)?strlen(A):strlen(B);
    
    for(i=0; i<len; i++){
    	sum=A[i]-'0'+B[i]-'0'+add;
    	while(sum<0) sum+='0';
    	if(sum>9) add=1;
    	else add=0;
    	result[i]=sum%10+'0';
	}
	if(add==1) result[len]='1';
    reverse(result);
    printf("%s", result);
    return 0;
}

void reverse(char str[]){
	int i, len=strlen(str);
	char temp;
	for(i=0; i<len/2; i++){
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
}