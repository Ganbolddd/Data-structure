#include<stdio.h>
int swap (int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
int partition (int arr[], int f, int l) {
	int pivot = arr[l];
	int i = (f - 1);
	
	for (int j = f; j <= l - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[l]);
	return (i + 1);
}

void quicksort (int arr[], int f, int l) {
	if (f >= l) return;
	
	int pivot_index = partition(arr, f, l);
	
	quicksort(arr, f, pivot_index - 1); 
	quicksort(arr, pivot_index + 1, l);
}

int main () {
	int arr[] = {10, 7, 8, 9, 1, 5};
	int N = sizeof(arr) / sizeof(arr[0]);
	
	quicksort(arr, 0, N - 1);
	printf("Sorted array: \n");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
