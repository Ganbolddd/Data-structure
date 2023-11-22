#include <stdio.h>

int fibo(int n) {
	int fib[n+1];
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 2;
	
	for (int i = 3; i <= n; i++) {
		fib[i] = fib[i-1] + fib[i-2] - fib[i-3];
	}
}

int main () {
	fibo(35);
	return 0;
}
