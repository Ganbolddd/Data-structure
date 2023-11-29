#include <stdio.h>
#include <ctype.h>
#include <string.h>

int wellOrder (char *word) {
	int length = strlen(word);
	
	for (int i = 0; i < length; i++) {
		word[i] = tolower(word[i]);
	}
	
	for (int i = 1; i < length; i++) {
		if (word[i - 1] > word[i]) { 
			return 0;
		} 
	}
	return 1;
}

int main () {
	char word[100];
	printf("Enter a word:");
	scanf("%s", word);
	
	int result = wellOrder(word);
	
	if (result) {
		printf("True");
	} else { 
		printf("False");
	}
	
	return 0;
}
