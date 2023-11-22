#include <stdio.h>
void subex(int n){
	int count=0;
	for(int i=0;i<n;i++){
		count++;
	}
}
void ex(int n){
	subex(int n);
}
int void main(){
	ex(10);
	return 0;
}

