#include <malloc.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortByBits(int *arr, int arrSize, int *returnSize) {
    *returnSize = arrSize;
    int *sizes = malloc(arrSize * sizeof(int));

    for (int i = 0; i < arrSize; i++) {
        int element = arr[i];

        int counter = 0;

        while (element != 0) {
            if ((element & 0b1) == 1) {
                counter++;
            }
            element = element >> 1;
        }

        sizes[i] = counter;
    }

    while (1) {
        int found = 0;
        for (int i = 0; i < arrSize - 1; i++) {
            if (sizes[i] > sizes[i + 1]) {
                found = 1;
                int tmp1 = sizes[i];
                int tmp2 = arr[i];

                sizes[i] = sizes[i + 1];
                sizes[i + 1] = tmp1;

                arr[i] = arr[i + 1];
                arr[i + 1] = tmp2;
            }
        }

        for (int i = 0; i < arrSize - 1; i++) {
            if (sizes[i] == sizes[i + 1]) {
                if (arr[i] > arr[i + 1]) {
                    found = 1;
                    int tmp1 = sizes[i];
                    int tmp2 = arr[i];

                    sizes[i] = sizes[i + 1];
                    sizes[i + 1] = tmp1;

                    arr[i] = arr[i + 1];
                    arr[i + 1] = tmp2;
                }
            }
        }

        if (!found) {
            break;
        }
    }

    free(sizes);
    return arr;
}