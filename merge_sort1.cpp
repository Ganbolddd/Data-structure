#include<stdio.h>
void merge(int a[], int f, int m, int l){
	
}
void merge_sort(int a[], int f, int l){
	if(f>=l) return;
	
	int m=(f+l)/2;
	merge_sort(a,f,m);
	merge_sort(a,m+1,l);
	merge(a,f,m,l);
}
int main(){
	int a[]={38,27,43,3,9,82,10};
	int n=7;
	
	merge_sort(a,0,n-1);

	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
