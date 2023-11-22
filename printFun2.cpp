#include <stdio.h>
void printFun4(int n)  {  
    if(n==0) return; 
    printf("%d ", n);
	printFun4(n-1);
	printf("%d ", n);
} 
int main() {
	printFun4(3);
}




