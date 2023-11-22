#include <stdio.h>
#include <time.h>
int ex3( int n )
{
	int count=0;
	int i,j;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {		
			count++;		
		}
	}
} 


int main(){
	clock_t start, end;
	float execution_time;
	start=clock();
	
	int result = ex3(100000);
	printf("%d", result);
	end = clock();
	execution_time = (float)(end - start)/CLOCKS_PER_SEC;
	printf("\nExecution Time: %.3f \n", execution_time);
	
	return 0;
}
