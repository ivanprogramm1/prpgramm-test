#include "functions.h"
#pragma once

int index_last_negative(int arr[], int size) {
    int last_index = -1;
    int current_index = 0;
    
    while (1) {
        int found_index = index_first_negative(arr + current_index, size - current_index);
        if (found_index == -1) break;
        
        last_index = current_index + found_index;
        current_index = last_index + 1;
    }
    
    return last_index;
}
