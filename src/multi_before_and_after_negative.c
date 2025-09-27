#include "multi_before_and_after_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_before_and_after_negative(int arr[], int size) {
    int first_neg = index_first_negative(arr, size);
    int last_neg = index_last_negative(arr, size);
    
    if (first_neg == -1 || last_neg == -1) {
        return 0;
    }
    
    int product = 1;
    for (int i = 0; i < first_neg; i++) {
        product *= arr[i];
    }
    for (int i = last_neg; i < size; i++) {
        product *= arr[i];
    }
    return product;
}
