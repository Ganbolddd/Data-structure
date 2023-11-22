#include <stdio.h>
#include <time.h>

void ex1(int n){
	int count;
	
	for(int i=1; i<=n; i++){
		count++;
	}
}
int main(){
	clock_t start, end;
	float execution_time;
	int n=1000000;
	start=clock();
	ex1(n);
	end = clock();
	execution_time = (float)(end - start)/CLOCKS_PER_SEC;
	printf("\nExecution Time: %.3f \n", execution_time);
	
	return 0;
}
