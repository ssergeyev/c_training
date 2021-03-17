#include <stdio.h>

int gradin(int n){
	int counter = 0;
	int tmp;
	printf("\n%d",n);
	
	while (n != 1){
		tmp=n%2;
		if (tmp == 0) n=n/2;
		if (tmp == 1) n=3*n+1;
		counter++;
		printf("->%d",n);
	}//while
	printf("\nSteps = %d\n=========================\n",counter);
	return (counter);
} //gradin

int main (int arc, char* argv){
	int count = 0;
	int max_count = 0;
	int max = 0;
	int max_old=0;
	int goal=7;
	
	printf("\n\nGradin\n");
	
	while (count < goal){
		count++;
//	count=77031;
		printf("Iteration = %d ",count);
		max=gradin(count);
		if (max > max_old){
			max_old = max;
			max_count = count;
			printf("\n\t\t\t\t\tMax steps = %d on step = %d\n\n",max,max_count);
		}
	}//while
	printf("\n\t\t\t\t##################################################\n");
	printf("\t\t\t\t\t  Max steps = %d on step = %d",max_old, max_count);
	printf("\n\t\t\t\t##################################################\n");
return (0);
}//main
