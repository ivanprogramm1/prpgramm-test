#include "functions.h"

int index_last_negative(int arr[], int size) {
    int last_neg = -1;
    int current_index = 0;
    
    while (current_index < size) {
        int found = index_first_negative(arr + current_index, size - current_index);
        if (found == -1) {
            break;
        }
        last_neg = current_index + found;
        current_index = last_neg + 1;
    }
    
    return last_neg;
}
