#include<stdio.h>

void ex (int n) {
	int i = 1;
	while(i <= n) {
		i++;
			int j =1;
			while(j <= n){
				printf("%d\n", j);
				j *= 2;	
			}
			printf("\n");
	}
}

int main () {
	ex(100);
	return 0;
}
