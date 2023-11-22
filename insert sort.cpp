int* insertion_sort(int a[],int n){
// your code here
return a;
}
int main(){
	int a[]={2,3,1,3,20,3,5,7};
	int n = sizeof(a)/sizeof(a[0]);
	int *sorted=insertion_sort(a,n);
	for(int i=0;i<n;i++) printf(“%d “,sorted[i]);
}
