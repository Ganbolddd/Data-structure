#include <stdio.h>
int best=10000;
void small_sum_array(int arr[][3], int selected[], int k, int n)
{
	int cur_sum=0;
	for(int i=0;i<k;i++) {
		cur_sum+=selected[i];
	}
	if(cur_sum>best) return;
	
	if(k==n){
		int sum=0;
		for(int i=0;i<n;i++) {
			printf("%d ", selected[i]);
			sum+=selected[i];
		}
		printf("\n");
		if(sum<best) best=sum;
		return; 
	}	
	selected[k]=arr[k][0];
	small_sum_array (arr, selected, k+1, n);
	selected[k]=arr[k][1];
	small_sum_array (arr, selected, k+1, n);
	selected[k]=arr[k][2];
	small_sum_array (arr, selected, k+1, n);
}
int main()
{
	int arr[][3]={{1,5,3},{2,4,6},{5,3,5}};

	int selected[3];	
	small_sum_array(arr, selected, 0, 3);
	printf("Best:%d",best);
	return 0;
}


















