#include<stdio.h>

int searchArray_re1(int a[], int n, int k) {
	if (n==0) {
		if(a[0]==k)	return 0;
		else return -1;
	}else{
		if(a[n]==k) return n;
		else searchArray_re1(a, n - 1, k);
	}
}

int main () {
	int a[] = {0, 11, 22, 34, 41, 59, 63, 75, 82, 90};
	printf("index: %d", searchArray_re1(a, 9, 90));
	return 0;
}
