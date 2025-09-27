#include "functions.h"

int index_last_negative(int arr[], int size) {
    int last = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            last = i;
        }
    }
    return last;
}
