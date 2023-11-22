#include <stdio.h>

void swap (int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubble_sort (int arr[], int n) {
	bool swapped;
	
	for (int i = 0; i < n - 1; i++) {
		swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
			swap(&arr[j], &arr[j + 1]);
			swapped = true;
		}
		}
	}
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main () {
	int arr[] = {3, 1, 31, 31, 9, 8, 2, 45};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, n);
	printf("Sorted arrray: ");
	printArray(arr, n);
	return 0;
}
