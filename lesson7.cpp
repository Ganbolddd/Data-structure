#include <stdio.h>
int duplicated_element(int array[], int n) {
	for(int i=0; i<array[n]; i++){
		if(array[i]==n) return array[i]; 
		else return 0;
	}
}
int main() {
	int array[]={3, 2, 6, 31, 9, 8, 2, 45};
	
	int result=duplicated_element(array, 8);
	if(result==1) printf("Duplicated!");
	else printf("No Duplicated!");
}







