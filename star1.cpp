#include <stdio.h>
void print_star(int n){
	if(n==0) return;
	
	else{
		print_star(n-1);
		for(int i=0; i<n; i++){
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	int n;
	scanf("%d", &n);
	print_star(n);
}





