#include<stdio.h>
void heapify(int a[], int k, int n){
	int larger_index=k;
	int left=2*k+1;
	int right=2*k+2;
	if(right<n) {
		if(a[left]>a[right]) {
			larger_index=left;
		}else larger_index=right;
	}else if(left<n) {
		larger_index=left;
	}
	if(a[k]<a[larger_index]){
		int temp=a[larger_index];
		a[larger_index]=a[k];
		a[k]=temp;
		heapify(a,larger_index,n);
	}
}
void heap_sort(int a[], int n){
	for(int i=n/2-1;i>=0;i--) {
		heapify(a,i,n);
	}
	for(int i=n-1;i>0;i--) {
		int temp=a[i];
		a[i]=a[0];
		a[0]=temp;
		heapify(a,0,i);
	}
}

int main(){
	int a[]={2,7,-4,1,50,23};
	int n=6;
	heap_sort(a,n);
		printf("Sorted array: \n");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
