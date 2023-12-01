#include <malloc.h>
#include <stdbool.h>
#include <string.h>

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
	int size_1 = 0;
	int size_2 = 0;

	for(int i=0;i<word1Size;i++){
		size_1 += strlen(word1[i]);
	}

	for(int i=0;i<word2Size;i++){
		size_2 += strlen(word2[i]);
	}

	if(size_1 != size_2){
		return false;
	}

	int index_1 = 0;
	int index_1_s = 0;
	int index_2 = 0;
	int index_2_s = 0;

	for (int i = 0; i < size_1; i++) {
		if(index_1_s >= strlen(word1[index_1])){
			index_1++;
			index_1_s = 0;
		}

		if(index_2_s >= strlen(word2[index_2])){
			index_2++;
			index_2_s = 0;
		}

		if(word1[index_1][index_1_s] != word2[index_2][index_2_s]){
			return false;
		}

		index_1_s++;
		index_2_s++;
	}

	return true;
}