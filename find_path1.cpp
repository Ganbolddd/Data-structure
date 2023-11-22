#include<stdio.h>
int best = 10000;
void find_path(int arr[][4], int path[], int k, int sx, int sy, int dx, int dy)
{
	int cur_sum = 0;
	for (int i = 0; i <= k; i++) {
		cur_sum += path[i];
	}
	
	if (cur_sum>best) return;
	
	if(sx==dx && sy==dy){
		path[k]=arr[sx][sy];
		int sum_path=0;
		for(int i=0;i<=k;i++) {
			printf("%d ", path[i]);
			sum_path+=path[i];
		}
		printf("Total: %d\n", sum_path);
		if(sum_path<best) best=sum_path;
		return;
	}
	if(sx+1<=dx){
		path[k]=arr[sx][sy];
		find_path(arr, path, k+1, sx+1, sy, dx, dy);
		path[k]=0;
	}
	if(sy+1<=dy) {
		path[k] = arr[sx][sy];
		find_path(arr, path, k + 1, sx, sy + 1, dx, dy);
		path[k] = 0;	 
	}

}
int main()
{
	int best;
	int arr[][4]={{0,5,2,8},{4,1,10,7},{3,9,6,11}};

	int path[10]={0,0,0,0,0,0,0,0,0,0};	
	find_path(arr, path, 1, 0, 0, 2, 3);
	printf("best path length: %d",best);
	return 0;
}

