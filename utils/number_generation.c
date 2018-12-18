#include <stdio.h>
#include <stdlib.h>
#define WORD_SIZE 8
#define CHAR_NUM 10

int main(int argc, char const *argv[]) {
	char numbers[CHAR_NUM] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int a, b, c, d, e, f, g, h;
	char word[WORD_SIZE + 1];
	FILE *filePtr;

	//open file
	if((filePtr = fopen("8_digit_numbers.txt", "w")) == NULL){
		printf("Could not open file\n");
		return 1;
	}

	for(a = 0; a < CHAR_NUM; a++){
		for(b = 0; b < CHAR_NUM; b++){
			for(c = 0; c < CHAR_NUM; c++){
				for(d = 0; d < CHAR_NUM; d++){
					for(e = 0; e < CHAR_NUM; e++){
						for(f = 0; f < CHAR_NUM; f++){
							for(g = 0; g < CHAR_NUM; g++){
								for(h = 0; h < CHAR_NUM; h++){
									word[0] = numbers[a];
									word[1] = numbers[b];
									word[2] = numbers[c];
									word[3] = numbers[d];
									word[4] = numbers[e];
									word[5] = numbers[f];
									word[6] = numbers[g];
									word[7] = numbers[h];
									word[8] = '\0';
									printf("\r%s of 100000000", word);
									fflush(stdout);
									fprintf(filePtr, "%s\n", word);
								}
							}
						}
					}
				}
			}
		}
	}
	printf("\n");

	fclose(filePtr);
	return 0;
}