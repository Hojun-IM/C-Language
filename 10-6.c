#include <stdio.h>

int main() {
	int tri[3], i;
	for(i=0; i<3; i++){
		scanf("%d", &tri[i]);
	}
	if(tri[0]==60 && tri[1]==60 && tri[2]==60) puts("Equilateral");
	else if (tri[0]+tri[1]+tri[2]==180 && (tri[0]==tri[1] || tri[0]==tri[2] || tri[1]==tri[2])) puts("Isosceles");
	else if(tri[0]+tri[1]+tri[2]==180 && tri[0]!=tri[1] && tri[1]!=tri[2] &&tri[0]!=tri[2]) puts("Scalene");
	else puts("Error");
	return 0;
}