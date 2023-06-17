#include <stdio.h>

int main() {
	int n, i, j, x[100001], y[100001], max, min, x_val, y_val;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	max=x[0], min=x[0];
	for(i=0; i<n; i++){
		if(x[i]>max) max=x[i];
		if(x[i]<min) min=x[i];
		x_val=max-min;
	}
	max=y[0], min=y[0];
	for(i=0; i<n; i++){
		if(y[i]>max) max=y[i];
		if(y[i]<min) min=y[i];
		y_val=max-min;
	}
	printf("%d", x_val*y_val);
	return 0;
}