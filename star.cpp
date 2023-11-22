#include <stdio.h>
void print_star(int n){
	if(n==0) return;
	
	else{
		for(int i=n; i>0; i--){
			printf("*");
		}
		printf("\n");
		print_star(n-1);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	print_star(n);
}





