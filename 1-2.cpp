#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countLetter(char *word) {
	int length = strlen(word);
	
	for (int i = 0; i < length; i++) {
		int count = 1;
		if (word[i] != '\0') {
			for (int j = j + 1; j < length; j++) {
				if (word[j] == word[i]) {
					count++;
					word[j] = '\0';
				}
			}
			printf("%c%d", word[i], count);
		}
	}
}

int main () {
	char word[100];	
	printf("Enter a word: ");
	scanf("%s", word);
	
	countLetter(word);
	return 0;
}


