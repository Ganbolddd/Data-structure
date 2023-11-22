#include <stdio.h>
void printFun(int n)  {  
	printf("%d ", n);	
    if(n-1)  printFun(n-1);  
    else  return; 
} 
void printFun2(int n)  {  
    if(n)  printFun2(n-1);  
    else  return; 
    printf("%d ", n);
} 
void printFun3(int n)  { 
    printf("%d ", n);
    if(n)  printFun3(n-1);  
    else  return ; 
    printf("%d ", n);
} 
int main() {
	printFun(3);
	printf("\n");
	printFun2(3);
	printf("\n");
	printFun3(3);
}



