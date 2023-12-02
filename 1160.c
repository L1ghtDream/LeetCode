#include <string.h>

#define CHARS_COUNT 26

int countCharacters(char **words, int wordsSize, char *chars)
{
	int sum = 0;

	int *chars_freq = calloc(CHARS_COUNT, sizeof(int));
	int chars_size = strlen(chars);

	for (int i = 0; i < chars_size; i++) {
		chars_freq[chars[i] - 'a']++;
	}


	for (int i = 0; i < wordsSize; i++) {
		char *word = words[i];
		int word_size = strlen(word);
		int good = 1;

		int *freq_word = calloc(CHARS_COUNT, sizeof(int));

		for (int j = 0; j < word_size; j++) {
			freq_word[word[j] - 'a']++;
		}

		for (int j = 0; j < CHARS_COUNT; j++) {
			if (freq_word[j] > chars_freq[j]) {
				good = 0;
				break;
			}
		}

		if (good) {
			sum += word_size;
		}
	}

	return sum;
}
