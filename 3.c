#import <string.h>
#import <stdio.h>

int lengthOfLongestSubstring(char *s) {
    int freq[130] = { [ 0 ... 129 ] = 0 };

    int size = strlen(s);

    int maxSize = 0;

    for (int i = 0; i < size; i++) {
        int j;
        for (j = i; j < size; j++) {
            int index = (int) s[j];
            //printf("[freq] %d\n", freq[index]);
            if (freq[index] == 1) {
                break;
            }
            freq[index]++;
        }
        j--;

        int tmp_size = (j - i + 1);
        //printf("%d -> %d : %d\n", i,j,tmp_size);

        if (maxSize < tmp_size) {
            maxSize = tmp_size;
        }

        for(int _=0;_<130;_++){
            freq[_]=0;
        }

    }

    return maxSize;
}
