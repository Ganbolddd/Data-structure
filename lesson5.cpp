#include <stdio.h>
#include <time.h>
void ex2(int n){
	int count;
	for(int i=1;i<=n;i++) {
		for(int j=0;j<=n;j++) {
			for(int j=0;j<=n;j++) {
				count++;
			}
		}
	}
}
int main(){
	clock_t start, end;
	float execution_time;
	int n=10000;
	start = clock();
	ex2(n);
	end = clock();
	execution_time = (float)(end - start)/CLOCKS_PER_SEC;
	printf("\nExecution Time: %.3f \n", execution_time);
return 0;
}

