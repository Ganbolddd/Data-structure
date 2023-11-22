#include<stdio.h>

void ex (int n) {
	int i = 1;
	while(i <= n) {
		printf("%d\n", i);
		i *= 2;
	}
}

int main () {
	ex(100);
	return 0;
}
