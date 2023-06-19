#include <stdio.h>

int main() {
	int a1, a2, a3, max=0, l1, l2;
	
	while(1){
		scanf("%d %d %d", &a1, &a2, &a3);
		if(a1==0 && a2==0 && a3==0) return 0;
		if(a3 < a1 + a2 && a2 < a1 + a3 && a1 < a2 + a3){
			if(a1==a2 && a2==a3) printf("Equilateral\n");
			else if((a1==a2 && a2!=a3) || (a2==a3 && a1!=a2) || (a1==a3 && a1!=a2)) printf("Isosceles\n");
			else if(a1!=a2 && a2!=a3 && a1!=a3) printf("Scalene\n");
		}
		else printf("Invalid\n");
	}
	return 0;
}