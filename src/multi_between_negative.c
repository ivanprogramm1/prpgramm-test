#include "functions.h"

int multi_between_negative(int arr[], int size) {
    int first_neg = index_first_negative(arr, size);
    int last_neg = index_last_negative(arr, size);
    
    if (first_neg == -1 || last_neg == -1 || first_neg >= last_neg) {
        return 0;
    }
    
    int product = 1;
    for (int i = first_neg; i < last_neg; i++) {
        product *= arr[i];
    }
    return product;
}
