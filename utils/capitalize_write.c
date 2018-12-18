#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define WORD_SIZE 8

void capitalize(char *word){
    if(word[0] >= 'a' && word[0] <= 'z'){
        word[0] = toupper(word[0]);
    }
}

int main(int argc, char const *argv[]) {

	// file pointer
	FILE *f1Ptr, *f2Ptr;
	char currWord[WORD_SIZE + 1];

	// open the file in read mode
	if((f1Ptr = fopen("8_letters_words_leet.txt", "r")) == NULL){
		puts("File could be opened!");
		return 1;
	}

	// open the file in write mode
	if((f2Ptr = fopen("8_letters_words_leet_capitalize.txt", "w")) == NULL){
		puts("File could be opened!");
		return 1;
	}

	// iterates for every row in the file
	while(!feof(f1Ptr)){
		// read a word
		fscanf(f1Ptr, "%8s", currWord);
		printf("readed %s\n", currWord);
		// leet the current word
		capitalize(currWord);
		// write the word on file 
		fprintf(f2Ptr, "%s\n", currWord);
		printf("writed %s\n", currWord);
	}

	fclose(f1Ptr); fclose(f2Ptr);

	return 0;
}
