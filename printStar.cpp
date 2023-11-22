#include<stdio.h>

void printStar(int a) {
	if (a <= 0) return;
	printStar(a - 1);
	for (int i = 0; i < a; i++) {
		printf("* "); 
	}
	printf("\n");
}

int main () {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printStar(n);
}
