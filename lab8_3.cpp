#include<stdio.h>

void printFun(int n) {

	if(n==0) {
//		printf("1 ");
		return;
	}
	
	printf("%d ", n);
	printFun(n-1);
	printf("%d ", n);
	printFun(n-1);
	printf("%d ", n);
	
}

int main () {
	printFun(3);
}
