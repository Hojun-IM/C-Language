#include <stdio.h>

int main() {
	int x, y, w, h, result_x, result_y;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	if(w-x>x) result_x=x;
	else result_x=w-x;
	
	if(h-y>y) result_y=y;
	else result_y=h-y;
	
	printf("%d", result_x>result_y?result_y:result_x);
	
	return 0;
}