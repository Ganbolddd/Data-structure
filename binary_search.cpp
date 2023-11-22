#include<stdio.h>

int binary_search (int arr[], int l, int r, int x) {
	while (l <= r) {
		int m = l + (r - 1) / 2;
		
		if (arr[m] == x)
			return m;
		if (arr[m] < x) 
			l = m + 1;
		else
			r = m - 1;
    }	
		return -1;
}

int main () {
	int arr[] = {10, 20, 30, 60, 80, 100, 110, 130, 170, 180};
	int x = 160;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int index = binary_search(arr, 0, n - 1, x);
	if (index == -1)
	printf("Not found!!");
	else 
	printf("index: %d", index);
	
	return 0;
}
