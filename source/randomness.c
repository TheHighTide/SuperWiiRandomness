#include "random_utils.h"

void init_random() {
    srand((unsigned int) time(NULL));
}

int get_random_in_range(int min, int max) {
    if (min > max) {
        int temp = min;
        min = max;
        max = temp;
    }

    return rand() % (max - min + 1) + min;
}