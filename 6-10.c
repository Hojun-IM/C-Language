#include <stdio.h>

int main() {
	char subject[51], grade[3];
	double credit, total=0, sum=0, point; 
	int i, j;
	
	for(i=0; i<20; i++){
		scanf("%s %lf %s", subject, &credit, grade);
		point=4.0;
		
		for(j=0; j<4; j++){	
			if(grade[0]=='A'+j){
				if(grade[1]=='+'){
					sum+=((point+0.5)*credit);
					total+=credit;
					break;
				}
				else if(grade[1]=='0'){
					sum+=(point*credit);
					total+=credit;
					break;
				}
			}
			else if(grade[0]=='F'){
				total+=credit;
				break;
			}
			else if(grade[0]=='P'){
				break;
			}
			point--;
		}
	}
	printf("%lf", sum/total);
	return 0;
}