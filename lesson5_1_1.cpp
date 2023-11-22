#include<stdio.h>

void ex (int n) {
	int i = 1;
	int count;
	for(i = 1; i <= n; i++) {
		int count;
		for(int j = 1;j <= n; j *= 2){
			printf("%d\n", j);
		}
		printf("\n");
	}
}

int main () {
	ex(100);
	
	return 0;
}
