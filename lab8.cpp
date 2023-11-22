#include<stdio.h>

void printFun(int n) {
	printf("%d ", n);
	if(n==1) {
		return;
	}
	
	printFun(n-1); 
}

int main () {
	printFun(3);
}
