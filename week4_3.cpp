#include<stdio.h>

int* insertion_sort (int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		
		while (j >= 0; && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	
	return a;
}

int main () {
	int arr[] = {3, 1, 31, 31, 9, 8, 2, 45};
	int n = sizeof(a) / sizeof(a[0]);
	int *sorted = insertion_sort(a, n);
	for (int i = 0; i < n; i++) printf("%d ", sorted[i]);
	return 0;
}
