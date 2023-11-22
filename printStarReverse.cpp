#include<stdio.h>

void printStar(int a) {
	if (a <= 0) return;
	for (int i = a; i > 0; i--) {
		printf("* "); 
	}
	printf("\n");
	printStar(a - 1);
}

int main () {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printStar(n);
}
