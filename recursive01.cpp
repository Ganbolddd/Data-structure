#include<stdio.h>

void ex (int n) {
	printf("%d\n", n);
	if (n == 0) {
		return;
	}
	ex(n/2);
	ex(n/2);
}

int main () {
	ex(100);
	return 0;
}
