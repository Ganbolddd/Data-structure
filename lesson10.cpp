#include <stdio.h>
void print_binary(int arr[], int k, int n){
	printf("%d\n", arr[k]);
	if(k==n) {
		return;
	}
	print_binary(arr,k,n);
	arr[k]=n;
	print_binary(arr,k+1,n);
	arr[k]=n;
}
int main(){
	int arr[]={0,0,0};
	print_binary(arr, 0, 3);
	return 0;
}




