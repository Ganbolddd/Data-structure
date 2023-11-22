#include<stdio.h>

int linear_search (int arr[], int n, int x) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == x) {
			return i;
		}
	} return -1;
}

int main () {
	int arr[] = {10, 20, 30, 60, 80, 100, 110, 130, 170, 180};
	int x = 110;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int index = linear_search(arr, n, 110);
	printf("index: %d", index);
	
	return 0;
}
